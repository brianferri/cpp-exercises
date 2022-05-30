/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 17 Esercizio - Distanza massima tra due elementi identici in un array.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
#include <cmath>
using namespace std;

int dist(int Arr[], int len) {
	int save = -1;
	for (int i = 0; i < len - 1; i++) {
		for (int j = i + 1; j < len; j++) {
			if(Arr[i] == Arr[j] && j - i > save){
                save = j - i;
			}
		}
	}
	return save;
}

int main() {
	int Arr[] = {1,2,5,6,3,2};
	int len = sizeof(Arr) / sizeof(Arr[0]); 
	cout << dist(Arr, len);
}