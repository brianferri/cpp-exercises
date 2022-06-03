/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 44-trovare-gh-o-ch-ricorsivamente-in-una-stringa.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

bool ghch(const char s[], const int len) {
	if (s[0] == '\0')
		return false;
	if ((s[0] == 'g' && s[1] == 'h') || (s[0] == 'c' && s[1] == 'h'))
		return true;
	else
		return ghch(++s, len - 1);
}

int main() {
	char string[256]; 

	cout << "Inserisci la stringa da analizzare: ";
	cin.getline(string, 256);

	if (ghch(string, 256))
		cout << "Trovato";
	else 
		cout << "Non c'e'";
}