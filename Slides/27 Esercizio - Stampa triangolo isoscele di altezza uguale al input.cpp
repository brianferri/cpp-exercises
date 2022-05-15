/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 27 Esercizio - Stampa triangolo isoscele di altezza uguale al input.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

int main () {
	int n;

	cout << "Inserire un numero: ";
	cin >> n;

	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n + i -1; ++j) {
			if (j <= n-i) cout << ' ';
			else if (j <= n+i-1) cout << '*';
		}
		cout << '\n';
	}
}
