/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 80-ricerca-di-ennesima-parola-in-una-stringa-di-parole.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

void parola(const char str[],int n, char dest[]) {
	char bef=' ';
	int a = 0, i = 0, j = 0;
	while (a < n && str[i] != '\0') {
		if (str[i]!=' ' && bef==' ')
			a = a + 1;
		bef=str[i];
		i = i + 1;
	}
	if (a == n) {
		i = i - 1;
		while (str[i] != '\0' && str[i] !=' ') {
			dest[j]=str[i];
			i = i + 1;
			j = j + 1;
		}
	}
	dest[j]='\0';
}

int main() {
	int r;
//	int n;
//	cout << "quante lettere conterra la tua frase? ";
//	cin >> n;
	char b[1000];
	const char a[]="buonasera mi chiamo pippo";
	cout << "quale parola vuoi cercare?";
	cin >> r;
	parola(a,r,b);
	cout << b;
}
