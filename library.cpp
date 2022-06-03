/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: library.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
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

//Stampa il contenuto di un array
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

//Concatena due array
void concatena_array(const int arr1[], const int arr2[], int conc[], int length1, int length2){
    int i = 0;
    for (i = i; i < length1; i++) {
        conc[i] = arr1[i];
    }
    for (i = i; i < length1 + length2; i++) {
        conc[i] = arr2[i - length1];
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

//Trova il numero mediano in un array
int mediano(int arr[], int n) {
	bubbleSort(arr, n);
	int median;
	if (n % 2 == 0) {
		median = (arr[n / 2 - 1] + arr[n / 2 ]) / 2;
	} else {
		median = arr[n / 2];
	}
	return median;
}

//Verifica se ci sono numeri uguali nell'array, 
//ritorna la lunghezza dell'array nuovo e 
//modifica i valori dell'array per essere univoci
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

//Unisce due array
int unione(int arr1[], int lenArr1, int arr2[], int lenArr2, int uni[]) {
	int a = occurredOnce(arr1, lenArr1);
	int b = occurredOnce(arr2, lenArr2);

	concatena_array(arr1, arr2, uni, a, b);
	int k = occurredOnce(uni, (a + b));

	return k;
}

//Converte stringa in uppercase
void uppercase(char arr[]) {
	for (int i = 0; i < strlen(arr); i++) {
		if (arr[i] >= 97 && arr[i] <= 122) {
			arr[i] = arr[i] - 32;
		}
	}
}

//converte string in lowercase
void lowercase(char arr[]) {
	for (int i = 0; i < strlen(arr); i++) {
		if (arr[i] <= 90 && arr[i] >= 65) {
			arr[i] = arr[i] + 32;
		}
	}
}

//Genera una barra dell'istogramma per una lunghezza massima
void istogramma(int max) {
	for (int i = 0; i < max; i++) {
		cout << "X";
	}
}

//Verifica se qualcosa e' dentro una stringa
bool Is_In(char str[], int k){
    bool flag=false;
    int j=0;
    while((!flag)&&(j<k)){
        if (str[j]==str[k]) flag = true;
        j++;
    }
    return(flag);
}

//Conta quante volte appare una lettere in una stringa
int conta(char arr[], char n) {
	int j = 0;
	for (int i = 0; i < strlen(arr); i++) {
		if (arr[i] == n) {
			j++;
		}
	}
	return j;
}
