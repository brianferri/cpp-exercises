/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 81-implementare-pila-con-struct-sx.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

const int lunghezza=11;

struct pila {
    int size[lunghezza];
    int testa;
};

pila neo_pila() {
    pila neo;
    neo.testa = 0;
    return neo;
}

bool empty(pila s) {
    return(s.testa == lunghezza);
}

pila push(pila s, int e) {
    if (s.testa == lunghezza)
        cout << "Errore, la pila e' piena!";
    else {
        s.testa = s.testa + 1;
        s.size[s.testa] = e;
    }
    return(s);
}

pila pop(pila s) {
    if (s.testa == 0)
        cout << "Errore, la pila e' vuota!";
    else {
        cout << "L'elemento rimosso e' " << s.size[s.testa] << '\n';
        s.testa = s.testa - 1;
    }
    return(s);
}

void stampa_pila(pila s) {
    for(int i=0; i<=lunghezza; i++)
      cout << s.size[i] << "\t";
}

int main(){
    pila pila=neo_pila();
    bool flag;

    pila=push(pila,5);
    pila=push(pila,7);
    flag=empty(pila);

    if (flag) cout << "Pila vuota\n";
        else cout << "Pila non vuota\n"; 
    stampa_pila(pila);
    pop(pila);
    stampa_pila(pila);
    return 0;
}