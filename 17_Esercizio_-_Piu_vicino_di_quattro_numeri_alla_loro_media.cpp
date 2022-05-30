/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 17 Esercizio - Piu' vicino di quattro numeri alla loro media.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
#include <cstdlib>
using namespace std;

int main () {
	int a,b,c,d,m;

	cout << "Inserire 4 numeri: \n";
	cin >> a >> b >> c >> d;

	m=(a+b+c+d)/4;
	a=abs(a);
	b=abs(b);
	c=abs(c);
	d=abs(d);

	if (a>b){
		if(b>c){
			if(c>d){
				cout << "Il numero piu' vicino alla media dei 4 numeri inseriti e' il quarto numero.";
			} else {
				cout << "Il numero piu' vicino alla media dei 4 numeri inseriti e' il terzo numero.";
			}
		} else {
			if(b>d) {
				cout << "Il numero piu' vicino alla media dei 4 numeri inseriti e' il quarto numero.";
			} else {
				cout << "Il numero piu' vicino alla media dei 4 numeri inseriti e' il secondo numero.";
			}
		}
	} else {
		if(a>c) {
			if(c>d){
				cout << "Il numero piu' vicino alla media dei 4 numeri inseriti e' il quarto numero.";
			} else {
				cout << "Il numero piu' vicino alla media dei 4 numeri inseriti e' il terzo numero.";
			}
		} else {
			if(a>d){
				cout << "Il numero piu' vicino alla media dei 4 numeri inseriti e' il quarto numero.";
			} else {
				cout << "Il numero piu' vicino alla media dei 4 numeri inseriti e' il primo numero.";
			}
		}
	}
}
