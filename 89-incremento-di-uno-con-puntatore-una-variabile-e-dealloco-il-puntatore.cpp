/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 89-incremento-di-uno-con-puntatore-una-variabile-e-dealloco-il-puntatore.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

int main() {
	int i; 
	int *p;
	
	cout << "inserire un numero da incrementare due volte: ";
	cin >> i; 

	p = new int;
	p = &i;
	*p = *p + 1;

	delete p;
	p = NULL;
	
	cout << "il risultato e' " << i;
}