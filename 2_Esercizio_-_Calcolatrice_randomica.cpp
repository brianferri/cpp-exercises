/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 2 Esercizio - Calcolatrice randomica.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	int a, b;

	cout << "Inserire i numeri: \n";
	cin >> a >> b;

	srand(time(0));
	cout << "l'operazione casuale scelta e' " << endl;
	int o = rand() % 5;

	if(o==0){
		cout << "somma" << endl;
		cout << "la somma e': " << a+b;
	}
	if(o==1){
		cout << "sottrazione" << endl;
		cout << "La sottrazione e': " << a-b;
	}
	if(o==4){
		cout << "prodotto" << endl;
		cout << "Il prodotto e': " << a*b;
	}
	if(o==3){
		cout << "divisione" << endl;
		cout << "la divisione e': " << a/b;
	}
	if(o==2){
		cout << "resto" << endl;
		cout << "Il resto e': " << a%b;
	}
}
