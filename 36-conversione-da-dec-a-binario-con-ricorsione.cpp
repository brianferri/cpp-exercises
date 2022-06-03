/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 36-conversione-da-dec-a-binario-con-ricorsione.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

int intToBin(int dec) {
	if (dec == 0)
		return 0;
	else
		return (dec % 2 + 10 * intToBin(dec / 2));
}

int main() {
	int dec;
	cout << "Inserisci il numero da convertire in binario: ";
	cin >> dec;

	cout << endl << "Il numero convertito in binario e': ";
	cout << intToBin(dec) << endl;

}