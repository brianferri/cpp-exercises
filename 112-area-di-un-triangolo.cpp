/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 112-area-di-un-triangolo.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

int main() {
	double base, altezza, area;
	
	cout << "Inserire la base e l'altezza: \n";
	cin >> base >> altezza;

	area = base * altezza / 2;

	cout << "l'area calcolata e': " << area;
}
