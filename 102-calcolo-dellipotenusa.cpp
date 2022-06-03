/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 102-calcolo-dellipotenusa.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <cmath>
#include <iostream>
using namespace std;

int main() {

	int a, b;
	double c;

	cout << "Inserire la lunghezza del primo cateto: ";
	cin >> a;
	cout << "\nInserire la lunghezza del secondo cateto: ";
	cin >> b;

	c = sqrt(pow(a, 2) + pow(b, 2));

	cout << "\nl'ipotenusa calcolata e' " << c << endl;
}