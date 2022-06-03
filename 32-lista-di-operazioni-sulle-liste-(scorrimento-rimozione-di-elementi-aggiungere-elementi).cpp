/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 32-lista-di-operazioni-sulle-liste-(scorrimento-rimozione-di-elementi-aggiungere-elementi).cpp
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

void ClearScreen() {
    for (int i = 0; i < 100; i++)
		cout << "\n";
}

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

//Conta la lunghezza della lista
int list_len(lista *head) {
	lista *tmp;
	int len = 0;
	if (head->next == NULL) {
		return 1;
	} else {
	tmp = head;
		while (tmp != NULL) { 
			tmp = tmp->next;
			len++;
		}
	}
	return len;
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

//Stampa modificata per visualizzare l'elemento selezionato
void corrente(lista* head, int tracker) {
	int i = 1;
	while (head != NULL) {
		if (i != tracker) {
		cout << head->val;
		head = head->next;
		if (head != NULL)
			cout << ", ";
		} else {
		cout << "[" << head->val;
		head = head->next;
		cout << "]";
		if (head != NULL)
			cout << ", ";
		}
		i++;
	}	
}

//Stampa solo l'elemento corrente
void elem_corrente(lista* head, int tracker) {
	int i = 1;
	while (head != NULL) {
		if (i != tracker) {
		head = head->next;
		} else {
		cout << head->val << endl;
		cout << "Indice: " << i << endl;
		head = head->next;
		}
		i++;
	}	
}

//Inserisce un elemento in testa a una lista
void ins_testa (lista* head, int n){
	lista* temp_head;
	temp_head = new lista;
	temp_head->val = n;
	temp_head->next = head;
	head = temp_head;
}

//Inserisce un elemento in coda a una lista
void ins_coda(lista *head, int n) {
	lista *temp;
	if (head == NULL) {
		head = new lista;
		head->val = n;
		head->next = NULL;
	} else { 
		temp = head;
 		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new lista;
		temp = temp->next;
		temp->val = n;
		temp->next = NULL;
	}
}

//Rimuove l'elemento selezionato dalla lista
void rimuovi_corr(lista* head, int &tracker) {
	lista* temp;
	for (int i = 1; head != NULL; i++) {
		if (i == tracker - 1) {
			head->next = (head->next)->next;
		}
		ins_testa(temp, head->val);
		head = head->next;
	}
	tracker--;
	head = temp;
}

int main() {
	ClearScreen();
	srand(time(0));
	lista *head;
	int tracker = 1;
	int elem;
	char sentinel;

	int len;
	cout << endl << "Quanto deve essere lunga la lista generata? ";
	cin >> len;

	cout << endl << "Numeri generati casualmente: " << endl;
	head = genera_elementi(len);
	stampa(head);

	do {
		len = list_len(head);
		cout << endl << "Visualizazzione della lista: " << endl;
		corrente(head, tracker);

		cout << endl << endl << "Opzioni: " << endl;
		cout << "S: Scorri in avanti" << endl;
		cout << "I: Indietro" << endl;
		cout << "E: Elimina elemento corrente" << endl;
		cout << "P: Print dell'elemento correntemente selezionato:" << endl;
		cout << "A: Aggiungi un elemento alla coda della lista" << endl;
		cout << "X: Esci e termina il programma" << endl << endl;

		cout << "Scelta: ";
		cin >> sentinel;

		switch (sentinel) {
			case 'S':
			case 's':
			{
				ClearScreen();
				if (tracker == len) {
					cout << "Non posso scorrere piu' in avanti di cosi." << endl;
				} else {
					cout << endl << "Scorro in avanti." << endl;
					tracker++;
				}
				break;
			}
			case 'I':
			case 'i':
			{
				ClearScreen();
				if (tracker == 1) {
					cout << "Non posso scorrere piu' indietro di cosi." << endl;
				} else {
					cout << endl <<"Scorro indietro." << endl;
					tracker--;
				}
				break;
			}
			case 'E':
			case 'e':
			{
				ClearScreen();
				cout << endl << "Rimozione dell'elemento corrente..." << endl;
				if (tracker == 1)
					head = head->next;
				else
					rimuovi_corr(head, tracker);
				break;
			}
			case 'P':
			case 'p':
			{
				ClearScreen();
				cout << endl << "Elemento selezionato: " << endl;
				elem_corrente(head, tracker);
				break;
			}
			case 'A':
			case 'a':
			{
				ClearScreen();
				cout << endl << "Inserire l'elemento da aggiungere: " << endl;
				cin >> elem;
				ins_coda(head, elem);
				break;
			}
			case 'X':
			case 'x':
			{
				ClearScreen();
				cout << endl << "Esco dal programma..." << endl;
				exit(0);
				break;
			}
			default:
			{
				ClearScreen();
				cout << endl << sentinel << " non e' un valore ammesso! Ritenta l'inserimento." << endl;
				break;
			}
		}
	} while (sentinel != 'x' || sentinel != 'X');
	cout << endl;
}