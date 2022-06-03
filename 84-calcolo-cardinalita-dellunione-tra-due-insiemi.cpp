/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 84-calcolo-cardinalita-dellunione-tra-due-insiemi.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

const int lunghezza = 10;

struct ins{
    int coda[lunghezza];
    int grandezza;
};

bool in(int elemento, ins insieme) {
    int i = 0;
    bool ricerca = false;
    while (i < insieme.grandezza) {
        if (insieme.coda[i] == elemento)
            ricerca = true;
        i++;
    }
    return ricerca;
}

int cardinalita(ins arr1, ins arr2) {
    int cardinalita = 0;
    for (int i = 0; i < arr1.grandezza; i++){
        if (!in(arr1.coda[i], arr2))
            cardinalita++;
    }
    cardinalita += arr2.grandezza;
    return cardinalita;
}

int main() {
    ins arr1={{1,2,3,4},4}; //la sintassi prevede l'inserimento di una lista di valori {{n1,n2,n3,n...}} e la lunghezza della lista {{...},n}
    ins arr2={{7,8,9,10},4};   

    cout << cardinalita(arr1, arr2);
}