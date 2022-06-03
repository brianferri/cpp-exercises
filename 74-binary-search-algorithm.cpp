/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 74-binary-search-algorithm.cpp
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

int binarySearch(int arr[], int x, int l, int r) {
	while (l <= r) {
		int mid = l + (r - l) / 2;

		if (arr[mid] == x)
			return mid;
		if (arr[mid] < x)
			l = mid + 1;
		else
			r = mid - 1;
	}
	return -1;
}


int main(void){
	int i, x;
	cout << "inserire la lunghezza dell'array: ";
	cin >> i;

	int arr[i];

	cout << "inserisci la stringa da confrontare: ";
		for (int j = 0; j < i; j++)
			cin >> arr[j];

	int n = sizeof(arr) / sizeof(arr[0]);

	bubbleSort(arr, n);
	
	cout << "inserire il numero da cercare: ";
	cin >> x;

	int result = binarySearch(arr, x, 0,  n);

	if (result == -1)
		cout << "il numero non e' presente nella lista";
	else
		cout << "il numero e' presente nella lista in posizione " << result + 1;
	return 0;
}
