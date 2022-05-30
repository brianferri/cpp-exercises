/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 34 Esercizio - Rimozione di elemento richiesto da una lista di interi.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// A linked list head
struct lista {
	int val;
	struct lista* next;
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
 	return head;
}

// Dato un puntatore al puntatore della lista (head),
// rimuovo la prima occorenza di _val nella
// lista, se c'e'
void rimuovi(lista** head, int _val) {
	
	// Tengo conto dei puntatori a head
	lista* temp = *head;
	lista* prev = NULL;
	
	// Se la testa contiene il _val da rimuovere
	if (temp != NULL && temp->val == _val) {
		*head = temp->next; // Testa cambiata
		delete temp;		 // Libero memoria
		return;
	}

	// Senno' cerco per _val nella lista,
	// tengo conto del puntatore precedente
	else {
	while (temp != NULL && temp->val != _val) {
		prev = temp;
		temp = temp->next;
	}

	// se _val non e' presente nella lista
	if (temp == NULL)
		return;

	// Salto l'elemento da rimuovere
	prev->next = temp->next;

	// Libero memoria
	delete temp;
	}
}

// Stampa tutti gli elementi di una lista
void stampa(lista* head) {
	while(head != NULL) {
		cout << head->val;
		head = head->next;
		if (head != NULL)
			cout << ", ";
	}
	cout << endl;
}

// Driver code
int main()
{
	srand(time(0));
	lista* head = genera_elementi(10);
	int num;

	cout << "Lista Generata: \n";
	stampa(head);

	cout << "\nQuale elemento vuoi rimuovere: \n";
	cin >> num;

	rimuovi(&head, num);
	cout << "\nLista senza l'elemento inserito: \n";
	stampa(head);
	
	return 0;
}