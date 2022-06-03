/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 39-conversione-di-decimale-in-binario-con-bit-salvati-in-valori-di-lista.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

struct lista {
	int val;
	lista* next;
};

void stampa(lista* head) {
	while(head != NULL) {
		cout << head->val;
		head = head->next;
	}
	cout << endl;
}

lista* revert(lista* head){
	lista* out = NULL;
	lista* temp;
	while (head != NULL){
		temp = head;
		head = head->next;
		temp->next = out;
		out = temp;
	}
	return(out);
}

lista* intToBin(int dec){
	lista* head;
	head = new lista;
	if (dec == 0)
		return 0;
	else {
		head->val = dec % 2;
		head->next = intToBin(dec / 2);
	}
	return head;
}

int main() {
	int dec;

	cout << "Inserisci il numero da convertire in binario: ";
	cin >> dec;

	lista* head = intToBin(dec);

	cout << endl << "Il numero convertito in binario e': ";
	stampa(revert(head));
}