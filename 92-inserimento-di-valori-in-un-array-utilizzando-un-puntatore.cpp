/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 92-inserimento-di-valori-in-un-array-utilizzando-un-puntatore.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

int main() {
	int Arr[10]; 
	int *p;
	for (int i = 0; i < 10; i++) {
		cout << "Inserisci il numero " << i + 1 << " dell'array: ";
		p = &Arr[i];
		cin >> *p;
	}
	cout << "I numeri inseriti sono: ";
	for (int i = 0; i < 10; i++) {
		cout << Arr[i] << "\t";	
	}
	delete p;
	p = NULL;
}