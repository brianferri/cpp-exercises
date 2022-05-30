/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 25 Esercizio - Inserire il divisore giusto.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

int main() {
	int n, d;

	cout << "Inserisci un numero: ";
	cin >> n;

	while(n%d!=0) {
		cout << "Inserisci un divisore valido per il numero inserito prima: ";
		cin >> d;
	}
	cout << "Divisore inserito correttamente!";
}