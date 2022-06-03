/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 98-invertire-gli-elementi-di-una-lista.cpp
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

typedef lista *plista;

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

//Inserisce un elemento in una lista
void ins(lista *head, int n) {
 	head->next = head;
	head->val = n;
}

//Inverte gli elementi di una lista
plista revert(plista head){
	plista out = NULL;
	plista temp;
	while (head != NULL){
		temp = head;
		head = head->next;
		temp->next = out;
		out = temp;
	}
	return(out);
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

	cout << "Numeri invertiti:" << endl;
	head = revert(head);
	stampa(head);

	cout << endl;
}