/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 24-radice-quadrata.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include<iostream>
using namespace std;

int main() {

	int x;
	cout << "Inserisci un numero al quale calcolare la radice quadrata:";
	cin >> x;

    if (x == 0 || x == 1)
    return x;

    int i = 1, result = 1;
    while (result <= x) {
      i++;
      result = i * i;
    }
    cout << "la radice quadrata del numero inserito e': 	" << i - 1;
}
