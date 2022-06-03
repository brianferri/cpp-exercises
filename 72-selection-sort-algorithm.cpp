/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 72-selection-sort-algorithm.cpp
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

void selectionSort(int arr[], int n){
	int i, j, min_idx;

	for (i = 0; i < n-1; i++)
	{
		min_idx = i;
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[min_idx])
			min_idx = j;

		swap(&arr[min_idx], &arr[i]);
	}
}

void printArray(int arr[], int size){
	int i;
	for (i=0; i < size; i++)
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

	selectionSort(arr, n);
	cout << "Sorted array: \n";

	printArray(arr, n);
	return 0;
}
