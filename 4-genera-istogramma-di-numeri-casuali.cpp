/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 4-genera-istogramma-di-numeri-casuali.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Inizializza a zero gli elementi di un array
void inizializzazione_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = 0;
    }
}

//Genera un array di dimensione n di numeri casuali
void genera_elementi(int arr[], int n, int max){
	for (int i = 0; i < n; i++) {
        arr[i] = rand() % max;
    }
}

//Genera una barra dell'istogramma per una lunghezza massima
void istogramma(int max) {
	for (int i = 0; i < max; i++) {
		cout << "X";
	}
}

//Stampa tante righe di istogeamma quante sono richieste
void chart(int righe, int max) {
	int arr[righe];

	inizializzazione_array(arr, righe);
	genera_elementi(arr, righe, max);

	for (int i = 0; i < righe; i++) {
		cout << i << "(" << arr[i] << ")\t:\t";
		istogramma(arr[i]);
		cout << endl;
	}
}

int main() {
	srand(time(0));
	int n, max;
	cout << "quanti numeri vuoi generare per l'istogramma?" << endl;
	cin >> n;

	cout << "quanto vuoi che siano lunghe, al massimo, le barre?" << endl;
	cin >> max;

	cout << "Istogramma: " << endl;
	chart(n, max);
}
