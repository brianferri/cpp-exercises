/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 47-conta-a-in-una-stringa-ricorsivamente.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

int search_a(char s[], int start=0){
    if (s[start] == '\0') 
		return 0;
    if (s[start] == 'a') 
		return search_a(s, start + 1) + 1;
    else 
		return search_a(s, start + 1);
}

int main() {
	char s[256]; 

	cout << "Inserisci la stringa da analizzare: ";
	cin.getline(s, 256);

	cout << search_a(s, 0);
}