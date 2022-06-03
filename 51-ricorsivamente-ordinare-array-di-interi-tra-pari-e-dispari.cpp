/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 51-ricorsivamente-ordinare-array-di-interi-tra-pari-e-dispari.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

void ordina(int arr[], int len, int index) {
	int temp;
	if (index == len) { //caso base
    } else if (!(arr[index] % 2)) {
		ordina(arr, len, index + 1);
	} else {
		temp = arr[index];
		arr[index] = arr[len];
		arr[len] = temp;
		ordina(arr, len - 1, index);
	}
}

int main() {
	int len;
	cout << "Inserisci la lunghezza dell'array: ";
	cin >> len;
	int arr[len]; 

	cout << "Inserisci i numeri da analizzare: " << endl;
	for (int i = 0; i < len; i++) {
		cin >> arr[i];
	}

	ordina(arr, len - 1, 0);
	
	cout << "L'array ordinato tra numeri pari e dispari e': " << endl;
	for (int i = 0; i < len; i++) {
		if (i + 1 < len )
			cout << arr[i] << ", ";
		else
			cout << arr[i];
	}
}