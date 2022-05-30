/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 23 Esercizio - Stampa n asterischi.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

int main () {
	int n;

	cout << "Inserire il numero di * da stampare";
	cin >> n;

	while(n) {
		cout << "*";
		n = n - 1;
	}
}