/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 6-stampare-array-senza-duplicati.cpp
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

//Stampa i contenuti di un array
void stampa_array(const int arr[], int n, bool flag) {
    if (flag) {
        for (int i = 0; i < n; i++) {
            cout << arr[i] << "\t";
        }
        cout << endl;
    } else {
        for (int i = n - 1 ; i >= 0; i--) {
            cout << arr[i] << "\t";
        }
        cout << endl;
    }
}

//Scambia due elementi
void swap(int *xp, int *yp){
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

//Algoritmo di BubbleSort
void bubbleSort(int arr[], int n){
	int i, j;
	for (i = 0; i < n-1; i++)
		for (j = 0; j < n-i-1; j++)
			if (arr[j] > arr[j+1])
				swap(&arr[j], &arr[j+1]);
}

//Verifica se ci sono numeri uguali nell'array
int occurredOnce(int arr[], int n) {
	bubbleSort(arr, n); // Optional, funziona anche senza fare il sort
		int temp[n];
	if (n==0 || n==1)
		return n;

	int j = 0;
	for (int i=0; i<n-1; i++)
		if (arr[i] != arr[i+1])
			temp[j++] = arr[i];

	temp[j++] = arr[n-1];
	for (int i=0; i<j; i++)
		arr[i] = temp[i];

	return j;
}


int main() {
	srand(time(0));

	int n, k;
	cout << "quanto vuoi che sia lunga la lista?" << endl;
	cin >> n;

	int arr[n];
	inizializzazione_array(arr, n);
	genera_elementi(arr, n, n);

	int dupArr[n];
	inizializzazione_array(dupArr, n);
	for (int i = 0; i < n; i++) {
		dupArr[i] = arr[i];
	}

	cout << "la lista generata e': " << endl;
	stampa_array(arr, n, 1);

	cout << "la lista senza duplicati e': " << endl;
	k = occurredOnce(dupArr, n);
	int dup[k];
	for (int i = 0; i < k; i++) {
		dup[i] = dupArr[i];
	}
	stampa_array(dup, k, 1);

	return 0;
}
