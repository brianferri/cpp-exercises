/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 5 Esercizio - Monete che mi servono.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

int main () {
	float euro;
	int buffer;

	cout << "inserire quanti euro vuoi convertire in monete: \n";
	cin >> euro;

	//Calcolo Monete ------------------------------------------

	//2 euro
	buffer = (int)euro / 2;
	cout << "monete da 2 euro: " << buffer << endl;

	//1 euro
	buffer = (int)euro % 2;
	cout << "monete da 1 euro: " << buffer << endl;

	//conteggio centesimi -- Sposto la lente sul posto dei decimali
	euro = euro - (int)euro;
	euro = euro * 100;

	//0.50 centesimi
	buffer = (int)euro / 50;
	euro = euro - buffer * 50;
	cout << "monete da 50 cent: " << buffer << endl;

	//0.20 centesimi
	buffer = euro / 20;
	euro = euro - buffer * 20;
	cout << "monete da 20 cent: " << buffer << endl;

	//0.10 centesimi
	buffer = euro / 10;
	euro = euro - buffer * 10;
	cout << "monete da 10 cent: " << buffer << endl;

	//0.05 centesimi
	buffer = euro / 5;
	euro = euro - buffer * 5;
	cout << "monete da 5 cent: " << buffer << endl;

	//0.02 centesimi
	buffer = euro / 2;
	euro = euro - buffer * 2;
	cout << "monete da 2 cent: " << buffer << endl;

	//0.01 centesimi
	buffer = euro / 1;
	cout << "monete da 1 cent: " << buffer << endl;
}
