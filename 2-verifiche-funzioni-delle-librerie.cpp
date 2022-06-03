/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 2-verifiche-funzioni-delle-librerie.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include "library.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main() {
	srand(time(0));
	int len_primo, len_secondo, max;

	cout << "lunghezza primo array: ";
	cin >> len_primo;

	cout << "lunghezza secondo array: ";
	cin >> len_secondo;

	cout << "numero massimo dei numeri generati: ";
	cin >> max;

    int arr1[len_primo], arr2[len_secondo], conc[len_primo + len_secondo];

	cout << "inizializzazione array..." << endl;
	inizializzazione_array(arr1, len_primo);
	inizializzazione_array(arr2, len_secondo);

	cout << "generando numeri..." << endl;
	genera_elementi(arr1, len_primo, max);
	genera_elementi(arr2, len_secondo, max);

	cout << "stampa primo array: " << endl;
	stampa_array(arr1, len_primo, true);

	cout << "stampa primo array al contrario: " << endl;
	stampa_array(arr1, len_primo, false);

	cout << "stampa secondo array: " << endl;
	stampa_array(arr2, len_secondo, true);

	cout << "stampa secondo array al contrario: " << endl;
	stampa_array(arr2, len_secondo, false);

	cout << "concatenando..." << endl;
	concatena_array(arr1, arr2, conc, len_primo, len_secondo);

	cout << "stampa concatenazione degli array: " << endl;
	stampa_array(conc, len_primo + len_secondo, true);

	cout << "il numero mediano del primo array generato casualmente e': " << mediano(arr1, len_primo) << endl;

	cout << "il numero mediano del secondo array generato casualmente e': " << mediano(arr2, len_secondo) << endl;

}