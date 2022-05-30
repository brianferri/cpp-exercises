/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 33.1 Esercizio - Conversione da binario a decimale.cpp
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

int convert(long long n) {
  int dec = 0, i = 0, rem;

  while (n!=0) {
    rem = n % 10;
    n = n / 10;
    dec = dec + rem * pow(2, i);
    i = i + 1;
  }
  return dec;
}

int main() {
	int num;

	cout << "inserire il numero da convertire in decimale da binario: ";
	cin >> num;
	cout << "Il numero convertito da binario e': " << convert(num);
}
