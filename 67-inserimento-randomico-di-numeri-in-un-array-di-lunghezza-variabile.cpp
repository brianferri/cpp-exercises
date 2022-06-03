/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 67-inserimento-randomico-di-numeri-in-un-array-di-lunghezza-variabile.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	int n;
	cout << "inserire la lunghezza dell'array: ";
	cin >> n;

	srand(time(0));
	cout << endl << "i numeri generati all'interno dell'array sono: " << endl;
	for (int array[n]; n > 0; --n)	{ 
		array[n] = rand()%n;
		cout << n << ".)\t" << array[n] << endl;
	}
}
