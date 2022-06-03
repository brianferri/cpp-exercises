/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 22-scambiare-due-char.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

int main() {
	char x, y;
	cout << "scrivere il primo numero: \n";
	cin >> x;
	cout << "scrivere il secondo numero: \n";
	cin >> y;

	char s;

	s = x;
	x = y;
	y = s;

	cout << "il primo valore, adesso scambiato e' " << x << " mentre il secondo e' " << y;
}