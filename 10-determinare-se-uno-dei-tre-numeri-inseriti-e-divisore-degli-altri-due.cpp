/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 10-determinare-se-uno-dei-tre-numeri-inseriti-e-divisore-degli-altri-due.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

int main (){
	int a, b, c;

	cout << "Inserisci 3 valori: \n";
	cin >> a >> b >> c;

	if(a%b==0){
		cout << "Uno dei tre numeri inseriti e' divisore di un'altro";
		return 0;
	}
	if(a%c==0) {
		cout << "Uno dei tre numeri inseriti e' divisore di un'altro";
		return 0;
	}
	if(b%a==0){
		cout << "Uno dei tre numeri inseriti e' divisore di un'altro";
		return 0;
	}
	if(b%c==0){
		cout << "Uno dei tre numeri inseriti e' divisore di un'altro";
		return 0;
	}
	if(c%a==0){
		cout << "Uno dei tre numeri inseriti e' divisore di un'altro";
		return 0;
	}
	if(c%b==0){
		cout << "Uno dei tre numeri inseriti e' divisore di un'altro";
		return 0;
	} else {
		cout << "Nessuno dei numeri inseriti e' divisore degli altri";
	}
}
