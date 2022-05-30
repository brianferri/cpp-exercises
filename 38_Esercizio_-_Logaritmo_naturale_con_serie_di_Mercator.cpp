/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 38 Esercizio - Logaritmo naturale con serie di Mercator.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

float pow(float a, float b) {
	float p = 1;
		while(b>0){
			p = p * a;
			b = b - 1;
		}
	return p;
}

float ln(float x) {
	float n = 0;
	if (x > -1 && x <= 1) {
		for (int i = 1; i <= 50; i = i + 1) {
			n = n + (((pow(-1, i + 1)) / (i) * (pow(x, i))));
		}
	} else {
		cout << "Errore" << endl;
		return 0;
	}
	return n;
}

int main (){
	float a;

	cout << "Inserire un numero sul quale fare la verifica delle funzioni: ";
	cin >> a;

	cout << "ln = " << ln(a);
}
