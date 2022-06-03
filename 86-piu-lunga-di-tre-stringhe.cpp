/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 86-piu-lunga-di-tre-stringhe.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

unsigned int strlen(const char *s) {
    unsigned int count = 0;
    while(*s!='\0') {
        count++;
        s++;
    }
    return count;
}

int maxSize(int len[3]) {
	int max;
	if ((len[0] > len[1]) && (len[0] > len[2])) 
		max = 1;
	if ((len[1] > len[0]) && (len[1] > len[2]))
		max = 2;
	if ((len[2] > len[0]) && (len[2] > len[1]))
		max = 3;
	return max;
}

int main() {
	char buf[200];
	int len[3];

	cout << "inserire la prima stringa: " << endl;
	gets(buf);
	len[0] = strlen(buf);

	cout << "inserire la seconda stringa: " << endl;
	gets(buf);
	len[1] = strlen(buf); 

	cout << "inserire la terza stringa: " << endl;
	gets(buf);
	len[2] = strlen(buf);

	cout << "la stringa piu' lunga tra quelle inserite e' la " << maxSize(len) << endl;
}
