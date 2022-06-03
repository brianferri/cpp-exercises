/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 46-scambio-di-due-numeri-con-solo-2-variabili.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

int main () {

	char x, y;

	cout << "inserire in ordine i due valori: \n";
	cin >> x >> y;

	x=x+y;
	y=x-y;
	x=x-y;

	cout << "i due valori scambiati di posizione sono: " << x << " e " << y;
}
