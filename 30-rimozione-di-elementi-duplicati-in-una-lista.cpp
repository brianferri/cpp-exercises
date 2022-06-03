/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 30-rimozione-di-elementi-duplicati-in-una-lista.cpp
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

lista* dup(lista* head) {
	lista* iter1 = head;
	lista* iter2;
	lista* nuova;
	while (iter1 != NULL && iter1->next != NULL) {
		iter2 = iter1;
		while (iter2->next != NULL) {
			if (iter1->val == iter2->next->val) {
				nuova = iter2->next;
				iter2->next = iter2->next->next;
				delete nuova;
			} else {
				iter2 = iter2->next;
			}
		}
		iter1 = iter1->next;
	}
	return head;
}

int main() {
	srand(time(0));
	lista *head;

	int len;
	cout << endl << "Quanto deve essere lunga la lista generata? ";
	cin >> len;

	cout << endl << "Numeri generati casualmente: " << endl;
	head = genera_elementi(len);
	stampa(head);

	cout << "Lista senza duplicati: " << endl;
	head = dup(head);
	stampa(head);

	cout << endl;
}