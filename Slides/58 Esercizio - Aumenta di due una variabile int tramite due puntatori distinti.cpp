/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 58 Esercizio - Aumenta di due una variabile int tramite due puntatori distinti.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

int main() {
	int i; 
	int *p, *q;
	
	cout << "inserire un numero da incrementare due volte: ";
	cin >> i; 

	p = &i;
	q = &i;
	*p = *p + 1;
	*q = *q + 1;
	
	cout << "il risultato e' " << i;
}