/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 110-dati-anagrafici-stampati-con-un-solo-cin-e-cout.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

int main() {
	int eta;
	char sesso;
	cout << "Inserisci la tua eta' e il tuo sesso (M/F): \n"; // E' un COUT superfluo
	cin >> eta >> sesso;
	if (sesso != 'M' && sesso != 'F') {
		cout << "Sesso inserito non riconosciuto!\n"; // E' un COUT superfluo
		return main();
	} else {
	cout << endl << "La tua eta' e': " << eta << endl << "Il tuo sesso e': " << sesso;
	return 0;
	}
}
