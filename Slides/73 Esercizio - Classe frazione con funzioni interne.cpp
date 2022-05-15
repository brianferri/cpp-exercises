/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 73 Esercizio - Classe frazione con funzioni interne.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

class frazione {
	public:
	int numeratore;
	int denominatore;
	void stampa () {
		cout << numeratore << endl << "-" << endl << denominatore << endl;
	};
	frazione moltiplica (frazione uno, frazione due) {
		frazione risultato;
		risultato.numeratore = uno.numeratore * due.numeratore;
		risultato.denominatore = uno.denominatore * due.denominatore;
		return risultato;
	};
	void inverso () {
		int temp;
		temp = numeratore;
		numeratore = denominatore;
		denominatore = temp;
	};
};

int main () {
	frazione uno, due;
	frazione risultato;
	
	cout << "Inserisci numeratore e denominatore, rispettivamente, per la prima frazione: " << endl;
	cin >> uno.numeratore;
	cout << "-" << endl;
	cin >> uno.denominatore;

	cout << "Inserisci numeratore e denominatore, rispettivamente, per la seconda frazione: " << endl;
	cin >> due.numeratore;
	cout << "-" << endl;
	cin >> due.denominatore;

	cout << "Moltiplico: " << endl;
	uno.stampa();
	cout << "*" << endl;
	due.stampa();
	cout << "Risultato: " << endl;
	risultato.moltiplica(uno, due);
	risultato.stampa();

	cout << "Stampo l'inverso: " << endl;
	risultato.inverso();
	risultato.stampa();
}