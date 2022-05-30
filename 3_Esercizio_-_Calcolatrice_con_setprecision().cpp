/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 3 Esercizio - Calcolatrice con setprecision().cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int a, b;
	char o;

	cout << "Inserire l'operazione: \n";
	cin >> a >> o >> b;

	if(o=='+'){
		cout << "la somma e': " << a+b;
	}
	if(o=='-'){
		cout << "La sottrazione e': " << a-b;
	}
	if(o=='*'){
		cout << "Il prodotto e': " << a*b;
	}
	if(o=='/'){
		cout << setprecision(2) << "la divisione e': " << double(a)/double(b);
	}
	if(o=='%'){
		cout << "Il resto e': " << a%b;
	}
}
