/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 15 Esercizio - Calcolatrice semplice.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

int main() {
	int a, b;
	char o;

	cout << "Inserire l'operazione: \n";
	cin >> a >> o >> b;

	if(o=='+'){
		cout << "la somma e': " << a+b;
	}
	if(o=='-'){
		cout << "La sottrazione e': " << a-b;
	}
	if(o=='*'){
		cout << "Il prodotto e': " << a*b;
	}
	if(o=='/'){
		cout << "la divisione e': " << a/b;
	}
	if(o=='%'){
		cout << "Il resto e': " << a%b;
	}
}
