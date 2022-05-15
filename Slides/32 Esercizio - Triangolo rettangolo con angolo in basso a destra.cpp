/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 32 Esercizio - Triangolo rettangolo con angolo in basso a destra.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>

using namespace std;

int main() {
	int n;

	cout<<"Inserisci un numero: ";
	cin>>n;

	for (int y = 1; y <= n; y++){
		for(int s = n-y; s>0; s--)	{
			cout<<"  "; //Due Spazi
		}
		for(int x = 1; x <= y; x++) {
			cout<<"* ";
	    }
		cout << endl;
	}
}
