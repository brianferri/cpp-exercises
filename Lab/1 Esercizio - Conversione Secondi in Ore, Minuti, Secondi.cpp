/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 1 Esercizio - Conversione Secondi in Ore, Minuti, Secondi.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

int main() {
	int secondi, minuti, ore;
	cin >> secondi;
	
	ore=secondi/3600;
	minuti=(secondi%3600)/60;
	secondi=(secondi%3600)%60;
	
	cout << "secondi: " << secondi << endl;
	cout << "minuti: " << minuti << endl;
	cout << "ore: " << ore;
}