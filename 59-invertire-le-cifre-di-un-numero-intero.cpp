/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 59-invertire-le-cifre-di-un-numero-intero.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

int inverti(int n) {

	int  reversedNumber = 0, remainder;

    while(n != 0) {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }
    return reversedNumber;
}


int main() {
	int n;

	cout << "Inserire un numero: ";
	cin >> n;

	cout << "Il numero invertito e': " << inverti(n);
}