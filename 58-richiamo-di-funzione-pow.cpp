/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 58-richiamo-di-funzione-pow.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

double pow(double a, double b) {
	double p = 1;
		while(b>0){
			p = p * a;
			b--;
		}
	return p;
}

int main() {
	int x, y;

	cout << "inserire due numeri: ";
	cin >> x >> y;

	cout << "(x^2)+(y^2) = " << pow(x, 2) + pow(y, 2);
	cout << "\n(x^2)*y = " << pow(x, 2) * y;
}