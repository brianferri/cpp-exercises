/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 16 Esercizio - Search function.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

int search(char Arr[], int len) {
	int save = -1;
	bool flag = false;
	for (int i = 0; i < len; i++) {
		if (Arr[i] == Arr[i + 1] && flag == false) {
			save = i + 1;
			flag = true;
		}
	}
	return save;
}

int main() {
	char Arr[] = "acbcbbd";
	int len = sizeof(Arr) / sizeof(Arr[0]); 
	cout << search(Arr, len);
}