/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 25 Esercizio - Funzione ricorsiva per trovare minimo e massimo valore in una lista.cpp
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
 	return head;
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

int max(lista* head){
    if (head->next==NULL) 
		return head->val;       
    if (head->val>max(head->next))
        return head->val;
    else 
		return max(head->next);
}

int min(lista* head){
    if (head->next==NULL) 
		return head->val;       
    if (head->val<min(head->next))
        return head->val;
    else 
		return min(head->next);
}

int main() {
	srand(time(0));
	int len;
	cout << "Inserisci la lunghezza della lista da generare: ";
	cin >> len;

	lista *head = genera_elementi(len);

	cout << endl << "Lista generata: " << endl;
	stampa(head);

	cout << endl << "Il numero massimo trovato nella lista e': ";
	cout << max(head) << endl;

	cout << endl << "Il numero minimo trovato nella lista e': ";
	cout << min(head) << endl;
}