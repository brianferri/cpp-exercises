/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 14 Esercizio - Converti stringa in uppercase e lowercase.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
#include <cstring>
using namespace std;

void uppercase(char arr[]) {
	for (int i = 0; i < strlen(arr); i++) {
		if (arr[i] >= 97 && arr[i] <= 122) {
			arr[i] = arr[i] - 32;
		}
	}
}

void lowercase(char arr[]) {
	for (int i = 0; i < strlen(arr); i++) {
		if (arr[i] <= 90 && arr[i] >= 65) {
			arr[i] = arr[i] + 32;
		}
	}
}

int main () {
	char parameter[50 + 1];

	cout << "Inserisci una stringa di massimo 50 caratteri: ";
	cin.getline(parameter, 50);

	cout << endl << "Il parametro inserito in lowercase diventa: ";
	lowercase(parameter);
	for (int i = 0; i < strlen(parameter); i++) {
		cout << parameter[i];
	}

	cout << endl << "Il parametro inserito in uppercase diventa: ";
	uppercase(parameter); 
	for (int i = 0; i < strlen(parameter); i++) {
		cout << parameter[i];
	}
}