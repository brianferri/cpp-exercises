/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 19 Esercizio - Scambiare due valori usando doppi puntatori.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

typedef int *pint;
typedef pint *ppint;

void scambia_ppint(ppint x, ppint y) {
	int tmp;
	tmp = *(*x);
	*(*x) = *(*y);
	*(*y) = tmp;
}

int main() {
	int a, b;
	pint pa = &a, pb = &b;
	ppint ppa = &pa, ppb = &pb;

	cout << "Inserisci il primo valore: ";
	cin >> a;
	cout << "Inserisci il secondo valore: ";
	cin >> b;
	scambia_ppint(ppa, ppb);
	cout << "I valori scambiati sono: " << endl;
	cout << "Primo: " << a << "\n" << "Secondo: " << b;
}