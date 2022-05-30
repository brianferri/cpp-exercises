/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 3 Esercizio - Scambiare 3 numeri reali.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

int inverti(int n);

int main() {

	int a, b, c;

	cout << "Inserisci i tre valori: ";
	cout << "\nNumero 1: ";
	cin >> a;
	cout << "\nNumero 2: ";
	cin >> b;
	cout << "\nNumero 3: ";
	cin >> c;

	a = inverti(a);
	b = inverti(b);
	c = inverti(c);

	cout << endl << "Il primo numero invertito: " << a;
	cout << endl << "Il secondo numero invertito: " << b;
	cout << endl << "Il terzo numero invertito: " << c;

}

int inverti(int n) {

	int  reversedNumber = 0, remainder;

    while(n != 0) {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }
    return reversedNumber;
}
