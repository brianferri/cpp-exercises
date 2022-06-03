/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 69-verificare-se-un-array-contiene-in-ordine-valori-palindromi.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

void palindrome(char arr[], int n){
	int flag = 0;
	for (int i = 0; i <= n / 2 && n != 0; i++) {
		if (arr[i] != arr[n - i - 1]) {
			flag = 1;
			break;
		}
	}
	if (flag == 1)
		cout << "Non Palindromo";
	else
		cout << "Palindromo";
}

int main() {
	int i;
	cout << "inserire la lunghezza dell'array: ";
	cin >> i;

	char arr[i];
	cout << "inserisci la stringa da verificare: ";
	cin >> arr;

	int n = sizeof(arr) / sizeof(arr[0]);

	palindrome(arr, n);
	return 0;
}
