/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 71-stampare-array-senza-duplicati.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

/*
void sort(int a[], int n) {
   int i, j, min, temp;
   for (i = 0; i < n - 1; i++) {
      min = i;
      for (j = i + 1; j < n; j++)
      if (a[j] < a[min])
      min = j;
      temp = a[i];
      a[i] = a[min];
      a[min] = temp;
   }
}
*/

void occurredOnce(int arr[], int n){
	sort(arr, arr + n);
	if (arr[0] != arr[1])
		cout << arr[0] << " ";
	for (int i = 1; i < n - 1; i++)
		if (arr[i] != arr[i + 1] && arr[i] != arr[i - 1])
			cout << arr[i] << " ";
	if (arr[n - 2] != arr[n - 1])
		cout << arr[n - 1] << " ";
}

int main() {
	int i, n;
	cout << "inserire il numero di interi da inserire nel array: ";
	cin >> i;
	int arr[i];
	cout << "inserire la lista di interi nell'array: ";
	for(int j = 0; j < i; j++)
		cin >> arr[j];

	n = sizeof(arr) / sizeof(arr[0]);

	occurredOnce(arr, n);

	return 0;
}
