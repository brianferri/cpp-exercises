/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 3-confronto-di-due-numeri.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

int main() {
	int a, b;
	cout << "Inserisci due numeri da confrontare: \n";
	cin >> a >> b;

	if (a == b) {
		cout << "I due numeri inseriti sono uguali!";
	} else {
		cout << "I due numeri inseriti non sono uguali!";
	}
}
