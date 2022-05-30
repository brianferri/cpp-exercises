/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 4 Esercizio - Conversione di distanza e tempo in velocita'.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

int main() {
	double dist, secondi;

	cout << "inserire la distanza in km e il tempo trascorso in secondi:" << endl;
	cin >> dist >> secondi;

	double ore=secondi/3600;
	double minuti=(int(secondi)%3600)/60;
	double miglia = dist/1.609;

	cout << "km/min = " << dist/minuti << endl;
	cout << "km/h = " << dist/ore << endl;
	cout << "m/min = " << miglia/minuti << endl;
	cout << "m/h = " << miglia/ore << endl;
}
