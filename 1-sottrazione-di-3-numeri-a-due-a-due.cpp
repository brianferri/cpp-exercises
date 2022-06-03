/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 1-sottrazione-di-3-numeri-a-due-a-due.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

int main() {
	int a, b, c;

	cout << "Inserire 3 numeri da sottrare a due a due: \n";
	cin >> a;
	cin >> b;
	cin >> c;

	cout << "\t" << a << "\t" << b << "\t" << c << endl;
	cout << a << "\t" << a-a << "\t" << a-b << "\t" << a-c << endl;
	cout << b << "\t" << b-a << "\t" << b-b << "\t" << b-c << endl;
	cout << c << "\t" << c-a << "\t" << c-b << "\t" << c-c << endl;
}