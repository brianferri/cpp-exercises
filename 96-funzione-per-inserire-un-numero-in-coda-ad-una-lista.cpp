/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 96-funzione-per-inserire-un-numero-in-coda-ad-una-lista.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

struct lista {
	int val;
	lista* next;
};

//Genera una lista contente numeri randomici da 0 a 50
lista* genera_elementi(int n) {
	lista *aux, *head;
	if(n < 1)
		//cout << "Non e' stato possibile creare la lista, lunghezza inserita non valida!";
		return NULL;
 	for(int i = 1; i <= n; i++) {
		if(i == 1) {
			head = new lista;
			aux = head;
		} else {
			aux->next = new lista;
 			aux = aux->next;
		}	
 	aux->val = rand() % 50;
 	}
	aux->next = NULL; //Aggiungo il NULL all'ultimo elemento
 	return(head);
}

//Stampa la lista
void stampa(lista* head) {
	while(head != NULL) {
		cout << head->val;
		head = head->next;
		if (head != NULL)
			cout << ", ";
	}
	cout << endl;
}

void ins_coda(lista *head, int n) {
	lista *tmp;
	if (head == NULL) {
		head = new lista;
		head->val = n;
		head->next = NULL;
	} else { 
		tmp = head;
 		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new lista;
		tmp = tmp->next;
		tmp->val = n;
		tmp->next = NULL;
	}
}

int main() {
	srand(time(0));
	lista *head;
	int n;

	int len;
	cout << endl << "Quanto deve essere lunga la lista generata? ";
	cin >> len;

	cout << endl << "Numeri generati casualmente: " << endl;
	head = genera_elementi(len);
	stampa(head);

	cout << endl << "Inserire un numero da aggiungere alla lista in coda: ";
	cin >> n;
	ins_coda(head, n);

	cout << endl << "la lista con l'elemento aggiunto in coda e': " << endl;
	stampa(head);
	cout << endl;
}