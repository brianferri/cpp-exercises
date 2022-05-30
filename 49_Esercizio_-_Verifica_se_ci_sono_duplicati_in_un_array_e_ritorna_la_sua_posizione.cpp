/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 49 Esercizio - Verifica se ci sono duplicati in un array e ritorna la sua posizione.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

int main() {
	bool flag = false;
	int n;
	cout << "Inserire la lunghezza che vuoi per l'array: ";
	cin >> n;
	char array[n];
	cout << "Inserire i contenuti dell'array: ";
	cin >> array;

	int count = sizeof(array) / sizeof(array[0]);

	for (int i = 0; i < count - 1; i++) {
   		for (int j = i + 1; j < count; j++) {
			if (array[i] == array[j]) {
				cout << "Primo numero duplicato trovato sul " << i + 1 << "^ componente dell'array";
				flag = true;
        	}
    	}
	}
	if (flag == false) {
		cout << -1;
	}
}
