/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 106-classe-rettangolo-e-cerchio.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

#define PIGRECO 3.14159265359

class rettangolo {
	public:
	int base, altezza;
	int perimetro() {
		return (2 * base) + (2 * altezza);
	};
	int area() {
		return base * altezza;
	};
};

class cerchio {
	protected:
	int raggio;
	public:
	int diametro() {
		return raggio * 2;
	};
	double area() {
		return raggio * raggio * PIGRECO;
	};
	double circonferenza() {
		return 2 * PIGRECO * raggio;
	};
	void getRaggio(int r) {
		raggio = r;
	};
};

int main () {
	rettangolo prima;
	cerchio secondo;
	int r;

	cout << "Accedo al oggetto della classe utilizzando l'operatore `.` (dot)" << endl;

	cout << "Inserisci un numero al quale inizializzare la base del rettangolo: ";
	cin >> prima.base;
	cout << "Inserisci un numero al quale inizializzare la altezza del rettangolo: ";
	cin >> prima.altezza;

	cout << "Posso accedere a funzioni interne, publiche, della classe." << endl;
	cout << "Il perimetro e' calcolato e ritornato direttamente nella classe: " << prima.perimetro() << endl;
	cout << "Stessa cosa per l'area: " << prima.area() << endl;

	cout << endl << "Un'altro esempio: Il cerchio, con il raggio 'Protected':" << endl;
	cout << "Per inserire il raggio non si utilizza lo stesso metodo di inserimento del rettangolo, si usera un metodo di inserimento tramite funzione in public:" << endl;
	cout << "Inserire il raggio del cerchio: ";
	cin >> r;
	secondo.getRaggio(r);
	cout << "Il diametro e': " << secondo.diametro() << endl;
	cout << "L'area e': " << secondo.area() << endl;
	cout << "La circonferenza e': " << secondo.circonferenza() << endl;

}