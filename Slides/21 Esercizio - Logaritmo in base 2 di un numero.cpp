/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 21 Esercizio - Logaritmo in base 2 di un numero.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

unsigned short int log2(unsigned short int n);

int main () {
    unsigned int a;

    cout << "Inserire un numero per il quale calcolare il logaritmo in base 2: \n";
    cin >> a;

    cout << "Il valore logaritmico di " << a
        << " e' " << log2(a) << endl;
}

unsigned short int log2(unsigned short int n) {

    if (n == 0) {
        cout << "Non abbiamo un logaritmo per ";
        return 0;
    }

        unsigned short int logValue = -1;
    while (n) {
        logValue++;
        n >>= 1;
    }
    return logValue;
}
