/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 33 Esercizio - Conversione da binario a decimale unita per unita.cpp
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
	int size, num = 0;
	bool digit;

	cout << "Inserire il numero di bit che vuoi utilizzare per il tuo numero: ";
	cin >> size;

	cout << "Inserire la prima unita del numero da convertire da binario a decimale(0 o 1): ";
	for(int i=0; i < size; i++){
		if(i==0)
			cin >> digit;
		else {
			cout << "Inserire la prossima unita del numero in binario da convertire(0 o 1): ";
			cin >> digit;
		}
		num = num+(digit*pow(2, i));
	}
	cout << "Il numero in binario inserito equivale a: " << num << " in decimale";
}