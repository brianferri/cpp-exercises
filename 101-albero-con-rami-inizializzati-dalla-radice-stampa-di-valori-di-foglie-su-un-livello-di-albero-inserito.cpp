/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 101-albero-con-rami-inizializzati-dalla-radice-stampa-di-valori-di-foglie-su-un-livello-di-albero-inserito.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

typedef struct talbero {
	int val;
	talbero* sinistra;
	talbero* destra;
} *palbero;

palbero inserisci_nodi_r(int num) {
	if (num < 1)
		return NULL;
	else {
		palbero albero = new talbero;
		albero->val = num;
		albero->sinistra = inserisci_nodi_r(num / 2);
		albero->destra = inserisci_nodi_r(num - 2);
		return albero;
	}
}

void stampa_albero_r(palbero albero) {
	if (albero != NULL) {
		cout << albero->val;
		
		cout << " [";
		stampa_albero_r(albero->sinistra);
		cout << "]";

		cout << " [";
		stampa_albero_r(albero->destra);
		cout << "]";
	}
}

void stampa_indice (palbero albero, int indice) {
	int marker = indice;
	if (marker < 1) {
		cout << albero->val << "\t";
	} else {
		stampa_indice(albero->sinistra, marker - 1);
		stampa_indice(albero->destra, marker - 1);
	}
}

int main() {
	srand(time(0));

	palbero albero;
	int marker;
	int len;

	cout << "Quale sara' il primo valore dell'albero?" << endl;
	cin >> len;
	albero = inserisci_nodi_r(len);

	cout << "L'albero: " << endl;
	stampa_albero_r(albero);

	cout << endl << "Inserisci l'indice della linea nell'albero da stampare: ";
	cin >> marker;
	cout << "foglie a indice " << marker << ": " << endl;
	stampa_indice(albero, marker - 1);
}