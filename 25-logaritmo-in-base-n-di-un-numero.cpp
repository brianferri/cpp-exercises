/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 25-logaritmo-in-base-n-di-un-numero.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

unsigned short int log2(unsigned short int n) {

    if (n == 0) {
        cout << "Non abbiamo un logaritmo per ";
        return 0;
    }
        unsigned short int logValue = -1;
    while (n) {//
        logValue++;
        n >>= 1;
    }
    return logValue;
}

unsigned int log(unsigned int a, unsigned int b) {
    return log2(a) / log2(b);
}

int main () {
    unsigned int a, b;

    cout << "Inserire la base e il numero per valutare l'algoritmo: \n";
    cin >> b >> a;

    cout << "Il valore logaritmico (base-" << b <<") di " << a
        << " e' " << log(a,b) << endl;
}
