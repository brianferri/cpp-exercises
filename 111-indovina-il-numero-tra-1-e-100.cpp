/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 111-indovina-il-numero-tra-1-e-100.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	int num, guess, tries = 0;
	srand(time(0)); 
	num = rand() % 100 + 1;
	
	do{
		cout << "inserisci un numero tra 1 e 100 : ";
		cin >> guess;
		tries++;

		if (guess > num)
			cout << "Troppo alto\n\n";
		else if (guess < num)
			cout << "Troppo basso\n\n";
		else
			cout << "\nEsatto, l'hai azzeccato con " << tries << " tentativi!\n";
	} while (guess != num);
	return 0;
}