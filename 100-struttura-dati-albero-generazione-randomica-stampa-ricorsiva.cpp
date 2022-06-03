/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 100-struttura-dati-albero-generazione-randomica-stampa-ricorsiva.cpp
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

palbero genera_nodi_r(int len) {
	if (len < 1)
		return NULL;
	else {
		palbero albero = new talbero;
		albero->val = rand() % 50;
		albero->sinistra = genera_nodi_r(len - 1);
		albero->destra = genera_nodi_r(len - 1);
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

int main() {
	srand(time(0));

	palbero albero;
	int len;

	cout << "Quanto vuoi che sia profondo l'albero?" << endl;
	cin >> len;
	albero = genera_nodi_r(len);

	cout << "L'albero: " << endl;
	stampa_albero_r(albero);

}