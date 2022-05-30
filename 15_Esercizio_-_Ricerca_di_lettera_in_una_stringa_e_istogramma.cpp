/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 15 Esercizio - Ricerca di lettera in una stringa e istogramma.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
#include <cstring>
#include "library.h"
using namespace std;

/* int conta(char arr[], char n) {
	int j = 0;
	for (int i = 0; i < strlen(arr); i++) {
		if (arr[i] == n) {
			j++;
		}
	}
	return j;
} */


//produce un istogramma delle lettere in una stringa
void istogramma_stringa (char a[]) {
    for (char j=65; j<=90; j++) {
        if (conta(a, j)!= 0) {
            cout << j << ": "; istogramma(conta(a, j)); cout << endl;
        }
    }
    for (char j=97; j<=122; j++) {
        if (conta(a, j)!= 0) {
            cout << j << ": "; istogramma(conta(a, j)); cout << endl;
        }
    }
}

int main() {
char parameter[50 + 1];
char letter;

	cout << "Inserisci una stringa di massimo 50 caratteri: ";
	cin.getline(parameter, 50);

	cout << endl << "Quale lettera contare: ";
	cin >> letter;

	cout << endl << "Il parametro inserito contiene " << conta(parameter, letter) << " '" << letter << "'";

	cout << endl << "Istogramma della parola inserita: " << endl;
	istogramma_stringa(parameter);
}