/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 108-dati-anagrafici-stampati.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

int main() {
	int eta;
	char sesso;
	cout << "Inserisci la tua eta': \n";
	cin >> eta;
	cout << "Inserisci il tuo sesso (M/F): \n";
	cin >> sesso;
	if (sesso != 'M' && sesso != 'F') {
		cout << "Sesso inserito non riconosciuto!\n";
		return main();
	} else {
	cout << endl << "La tua eta' e': " << eta << endl << "Il tuo sesso e': " << sesso;
	return 0;
	}
}
