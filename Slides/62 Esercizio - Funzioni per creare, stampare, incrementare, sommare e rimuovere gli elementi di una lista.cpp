/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 62 Esercizio - Funzioni per creare, stampare, incrementare, sommare e rimuovere gli elementi di una lista.cpp
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

//Rimuove il primo elemento della lista
lista* rimuovi(lista *head) {
	lista* aux;
 	if(head == NULL) //Su lista vuota non fa nulla
		return(head);
 	aux = head;
 	head = head->next;
 	delete aux;
 	return head;
}

//Calcola la somma degli elementi della lista
int somma(lista* head) {
	int s = 0;
	while(head != NULL) {
		s = s + head->val;
		head = head->next;
	}
	return s;
}

//Incrementa di 1 tutti gli elementi della lista
lista* incr(lista* head) {
	lista *aux=head;
	while(head != NULL) {
		head->val = head->val + 1;
		head = head->next;
	}
	return aux;
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

int main() {
	srand(time(0));
	lista *head;

	int len;
	cout << endl << "Quanto deve essere lunga la lista generata? ";
	cin >> len;

	cout << endl << "Numeri generati casualmente: " << endl;
	head = genera_elementi(len);
	stampa(head);

	cout << endl << "La somma degli elementi nella lista e': " << somma(head) << endl;
	
	head = incr(head);
	cout << endl << "Gli elementi della lista incrementati di uno sono: " << endl;
	stampa(head);

	head = rimuovi(head);
	cout << endl << "Avendo rimosso l'elemento in testa nella lista, ottengo gli elementi: " << endl; 
	stampa(head);

	cout << endl;
}