/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 43-serie-di-taylor-approssimazione-ex.cpp
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

int fact(int f) {
	int i;
	i = f;
	while(f>1) {
		i = i * (f-1);
		f = f - 1;
	}
	return i;
}

double taylor(double x, double n) {
	double t = 1;
	while(n>0){
		t = t + (pow(x, n)/fact(n));
		n--;
	}
	return t;
}

int main() {
	int x;
	double n;

	cout << "inserisci l'esponente da calcolare su 'e': " << endl;
	cin >> x;
	cout << "inserisci la approssimazione che vuoi sul calcolo: " << endl;
	cin >> n;

	cout << taylor(x, n);
}