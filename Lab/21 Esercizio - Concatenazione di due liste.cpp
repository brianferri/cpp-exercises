/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 21 Esercizio - Concatenazione di due liste.cpp
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

void list_cat(lista *head, lista *coda) {
	while (coda != NULL) {
		ins_coda(head, coda->val);
		coda = coda->next;
	}
}

int main() {
	srand(time(0));
	lista *head, *coda;
	int n;

	int len1;
	cout << endl << "Quanto deve essere lunga la prima lista generata? ";
	cin >> len1;
	
	cout << endl << "Prima lista generata casualmente: " << endl;
	head = genera_elementi(len1);
	stampa(head);

	int len2;
	cout << endl << "Quanto deve essere lunga la seconda lista generata? ";
	cin >> len2;
	
	cout << endl << "Seconda lista generata casualmente: " << endl;
	coda = genera_elementi(len2);
	stampa(coda);

	cout << endl << "la lista concatenata e': " << endl;
	list_cat(head, coda);
	stampa(head);
	cout << endl;
}