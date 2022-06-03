/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 70-verificare-lesistenza-di-un-numero-in-un-array.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

int main() {
	int i, n;
	bool flag;
	cout << "inserire il numero di interi da inserire nel array: ";
	cin >> i;
	int arr[i];
	cout << "inserire la lista di interi nell'array: ";
	for(int j = 0; j < i; j++)
		cin >> arr[j];
	cout << "inserire il numero con quale fare il confronto: ";
	cin >> n;
	for (int j = 0; j < i; j++){
		if (n == arr[j]) {
			flag = true;
		}
	}
	if (flag == 1)
		cout << "true";
	else
		cout << "false";
}
