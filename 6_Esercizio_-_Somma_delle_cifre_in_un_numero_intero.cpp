/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 6 Esercizio - Somma delle cifre in un numero intero.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

int main() {
	int n, t, s = 0;

	cout << "Inserire un numero del quale sommare le cifre: \n";
	cin >> n;

	while(n){
		t=n%10;
		s=s+t;
		n=n/10;
	}
	cout << s;
}
