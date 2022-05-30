/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 57 Esercizio - Funzione generatrice di numeri randomici utilizzando puntatori e registri RAM.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

int convert(int array[], int len) {
    int dec = 0, power = 1;

    for (int i = 0; i < len; i++) {
        dec += array[(len - 1) - i] * power;
        power *= 2;
    }
    return dec;
}

int random() {
	int num[16];
	int *A, *B;
	for (int i = 0; i < 16; i++) {
		A = new int;
		B = new int;
		if (A > B){
			num[i] = 1;
		} else {
			num[i] = 0;
		}
	}
	int n = sizeof(num) / sizeof(num[0]);
	return convert(num, n);
	delete A;
	A = NULL;
	delete B;
	B = NULL;
}

int main() {
	cout << random();
}