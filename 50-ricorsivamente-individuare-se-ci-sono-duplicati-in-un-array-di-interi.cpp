/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 50-ricorsivamente-individuare-se-ci-sono-duplicati-in-un-array-di-interi.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

bool dup(int a[], int len, int index, int start) {
    if (index == len-1) {
        return false;
    } else if (a[index] == a[start]) {
        return true;
    } else if (start < len) {
        return (dup(a, len, index, start + 1));
    } else {
        return (dup(a, len, index + 1, index + 2));
    }
}

int main() {
	int arr[10]; 
	int len;
	cout << "Inserisci la lunghezza dell'array: ";
	cin >> len;

	cout << "Inserisci i numeri da analizzare: " << endl;
	for (int i = 0; i < len; i++) {
		cin >> arr[i];
	}

	if (dup(arr, len, 0, 1))
		cout << "Esistono duplicati";
	else
		cout << "Non ci sono duplicati";
}