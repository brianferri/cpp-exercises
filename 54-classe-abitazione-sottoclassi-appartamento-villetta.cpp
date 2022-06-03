/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 54-classe-abitazione-sottoclassi-appartamento-villetta.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

class abitazione {
	protected: //===========================
	int stanze;
	double metratura;
	public: //==============================
	abitazione(int _stanze, double _metric) {
		stanze = _stanze;
		metratura = _metric;
	}
	double prezzo_metr_qu (int prezzo) {
		return metratura * prezzo;
	}
};

class appartamento:public abitazione {
	protected: //===========================
	int piano;
	public: //==============================
	appartamento(int _stanze, double _metric, int _piano):abitazione(_stanze, _metric) {
		piano = _piano;
	}
	double prezzo(double _prezzo) {
		return abitazione::prezzo_metr_qu(_prezzo);
	}
};

class villetta:public abitazione {
	protected: //===========================
	//No need for initialization
	public: //==============================
	villetta(int _stanze, double _metric):abitazione(_stanze, _metric) {
	}
	double prezzo(double _prezzo) {
		return abitazione::prezzo_metr_qu(_prezzo) * 1.10;
	}
};

int main() {
	appartamento normale = appartamento(3, 50, 2);
	villetta lussuosa = villetta(5, 120);

	cout << "Il prezzo per la villetta e': " << lussuosa.prezzo(2000) << endl;
	cout << "Il prezzo per l'appartamendo e': " << normale.prezzo(1000) << endl;
	
}