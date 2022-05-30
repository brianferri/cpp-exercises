/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 71 Esercizio - Ricorsivamente stampa asterischi uguale alla somma dei quadrati dei primi numeri naturali.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

void asterisk(int num) {
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			cout << "*";
		}
	}
	asterisk(num - 1);
}

int main() {
	int nat; 

	cout << endl << "Inserisci un numero naturale: ";
	cin >> nat;

	cout << endl << "Asterischi: " << endl;
	asterisk(nat);
}