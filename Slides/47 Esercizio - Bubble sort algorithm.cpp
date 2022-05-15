/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 47 Esercizio - Bubble sort algorithm.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

void swap(int *xp, int *yp){
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void bubbleSort(int arr[], int n){
	int i, j;
	for (i = 0; i < n-1; i++)	
	
	for (j = 0; j < n-i-1; j++)
		if (arr[j] > arr[j+1])
			swap(&arr[j], &arr[j+1]);
}

void printArray(int arr[], int size){
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main(){
	int i;
	cout << "inserire la lunghezza dell'array: ";
	cin >> i;

	int arr[i];
	cout << "inserisci la stringa da ordinare: ";
	for (int j = 0; j < i; j++)
		cin >> arr[j];

	int n = sizeof(arr) / sizeof(arr[0]);

	bubbleSort(arr, n);
	cout<<"Array ordinato: \n";
	
	printArray(arr, n);
	return 0;
}

