/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 42 Esercizio - Conversione di un numero binario in decimale usando gli array.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>

using namespace std;

int pow2(int value){
    int ris = 1;

    if (value >= 1) {
            for (int i = 1; i <= value; i++) {
                ris *= 2;
        }
    }
    return ris;
}

int main () {
	int n, dec = 0;
	cout << "inserire la lunghezza dell'array, contente il numero: ";
	cin >> n;
    char bin[n];

    cout << "\n(se il numero inserito sfora la lunghezza dell'array solo i primi bit nell'array verranno presi)\n";
    cout << "(se non si riempe completamente l'array i restanti posti vuoti verranno cosiderati come degli 0)\n";
    cout << "Inserisci la sequenza di bit da convertire: ";
    cin >> bin;

    for (int i = 0; i <= n - 1; i++) {
        if (bin[i] == '1') {
            dec += pow2(n - i - 1);
        }
    }
    cout << "\nValore decimale: " << dec << "\n";
}
