/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 57-somma-e-prodotto-di-due-numeri-binari.cpp
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
			b = b - 1;
		}
	return p;
}

int BD(long long n) {
  int dec = 0, i = 0, rem;

  while (n!=0) {
    rem = n % 10;
    n = n / 10;
    dec = dec + rem * pow(2, i);
    i = i + 1;
  }
  return dec;
}

int DB(int n) {
	int q, r;
	do {
		q = n/2;
		r = n%2;
		cout << r;
		n = q;
	} while (q != 0);
	cout << endl;
	return 0;
}

int main() {
	int x, y, s, p;

	cout << "inserire due numeri da sommare in binario: \n";
	cin >> x >> y;

	x = BD(x);
	y = BD(y);

	s=x+y;
	cout << "La somma dei due numeri e': ";
	DB(s);
	cout << "il risultato e' da leggere al contrario (dall'ultima cifra alla prima)";
	
	p=x*y;
	cout << "\nIl prodotto dei due numeri e': ";
	DB(p);
	cout << "il risultato e' da leggere al contrario (dall'ultima cifra alla prima)";
}
