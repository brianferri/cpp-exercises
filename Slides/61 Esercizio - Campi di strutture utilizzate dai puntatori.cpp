/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 61 Esercizio - Campi di strutture utilizzate dai puntatori.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

struct in5 {
	int a;
	int b;
	int c;
	int d;
	int e;
};

int main() {
	in5 one;
	in5 *p;
	p = &one;
	
	cout << "i valori inseriti predefiniti sono: ";

	(*p).a = 1; 
	(*p).b = 2;
	(*p).c = 3;
	(*p).d = 4;
	(*p).e = 5;

	cout << one.a << "\t" << one.b << "\t" << one.c << "\t" << one.d << "\t" << one.e;
}