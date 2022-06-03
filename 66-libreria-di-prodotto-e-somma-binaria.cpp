/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 66-libreria-di-prodotto-e-somma-binaria.cpp
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

int bin2dec(long long n) {
  int dec = 0, i = 0, rem;

  while (n!=0) {
    rem = n % 10;
    n = n / 10;
    dec = dec + rem * pow(2, i);
    i = i + 1;
  }
  return dec;
}

int dec2bin(int n) {
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

int sum_bin(int x, int y) {
	int s;

	x = bin2dec(x);
	y = bin2dec(y);

	s=x+y;
	dec2bin(s);
	return 0;
}

int prod_bin(int x, int y) {
	int p;

	x = bin2dec(x);
	y = bin2dec(y);


	p=x*y;
	dec2bin(p);
	return 0;
}

int main (){
	int a, b;

	cout << "Inserire due numeri sul quale fare la somma binaria e il prodotto binario: ";
	cin >> a >> b;

	cout << "\nsomma binaria = " << sum_bin(a, b);
	cout << "\nprodotto binaria = " << prod_bin(a, b);
	cout << "I numeri sono da leggere al contrario.";
}