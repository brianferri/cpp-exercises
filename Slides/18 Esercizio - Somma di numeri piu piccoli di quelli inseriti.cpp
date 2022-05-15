/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 18 Esercizio - Somma di numeri piu piccoli di quelli inseriti.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

int main() {
	int n, i;

	cout << "Inserire un numero: \n";
	cin >> n;
	i = n;

	while(n>0) {
		i = i + (n-1);

		n = n - 1;
	}
	cout << i;
}
