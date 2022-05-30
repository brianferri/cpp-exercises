/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 19 Esercizio - Fattoriale di un numero.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

int main() {
	int n, i;

	cout << "Inserire un numero da fattorializzare: \n";
	cin >> n;
	i = n;

	while(n>1) {
		i = i * (n-1);

		n = n - 1;
	}
	cout << i;
}
