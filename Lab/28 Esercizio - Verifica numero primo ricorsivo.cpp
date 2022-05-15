/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 28 Esercizio - Verifica numero primo ricorsivo.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

int primo(int x, int i) {
	if (i == 1)
		return 1;
	if (i == 0 || x % i == 0)
		return 0;
	else
		return primo(x, i - 1);
}

int main() {
	int dec;

	cout << "Inserisci il numero da verificare come primo: ";
	cin >> dec;

	if (primo(dec, dec - 1))
		cout << "Il numero e' primo";
	else
		cout << "Il numero non e' primo";
 
}