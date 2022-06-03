/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 17-array-di-struttura-inserimento-e-stampa.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

const int MAX = 100;

typedef struct studente {
	char nome[MAX];
	char cognome[MAX];
	char matricola[MAX];
} studente;

int main() {
	studente insert[MAX];
	char exit;
	int i = 0;
	while (exit != 'Y') {
		cout << "Studente: " << i + 1 << endl;
		cout << endl <<  "Inserire il nome dello studente: ";
		cin >> insert[i].nome;
		cout << endl << "Inserire il cognome dello studente: ";
		cin >> insert[i].cognome;
		cout << endl << "Inserire il numero di matricola dello studente: ";
		cin >> insert[i].matricola;
		i++;
		cout << "Finito l'inserimento di tutti gli studenti? Y/N" << endl;
		cin >> exit;
		if (exit != 'Y' && exit != 'N') {
			cout << "Inserimento non valido, il programma verra' terminato.";
			return(0);
		}
	}

	for (int j = 0; j < i; j++) {
		cout << endl << "Stampa studenti: " << endl;
		cout << "Studente " << j + 1 << endl;
		cout << "\t" << insert[j].nome;
		cout << "\t" << insert[j].cognome;
		cout << "\t" << insert[j].matricola;
	}
}