/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 13 Esercizio - Unione di due liste generate randomicamente.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include "library.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

/* int unione(int arr1[], int lenArr1, int arr2[], int lenArr2, int uni[]) {
	int a = occurredOnce(arr1, lenArr1);
	int b = occurredOnce(arr2, lenArr2);

	concatena_array(arr1, arr2, uni, a, b);
	int k = occurredOnce(uni, (a + b));

	return k;
} */

int main() {
	srand(time(0));
	int len_primo, len_secondo, max;

	cout << "lunghezza primo array: ";
	cin >> len_primo;

	cout << "lunghezza secondo array: ";
	cin >> len_secondo;

	cout << "numero massimo dei numeri generati: ";
	cin >> max;

    int arr1[len_primo], arr2[len_secondo];
	int temp[occurredOnce(arr1, len_primo) + occurredOnce(arr2, len_secondo)];

	cout << "inizializzazione array..." << endl;
	inizializzazione_array(arr1, len_primo);
	inizializzazione_array(arr2, len_secondo);

	cout << "generando numeri..." << endl;
	genera_elementi(arr1, len_primo, max);
	genera_elementi(arr2, len_secondo, max);

	cout << "stampa primo array: " << endl;
	stampa_array(arr1, len_primo, true);

	cout << "stampa secondo array: " << endl;
	stampa_array(arr2, len_secondo, true);

	cout << "inizializzo l'unione..." << endl;
	int len_union = unione(arr1, len_primo, arr2, len_secondo, temp);
	int uni[len_union];
	inizializzazione_array(uni, len_union);

	cout << "unendo i due array..." << endl;
	unione(arr1, len_primo, arr2, len_secondo, uni);

	cout << "l'unione dei due array generati e': " << endl;
	stampa_array(uni, len_union, true);
}