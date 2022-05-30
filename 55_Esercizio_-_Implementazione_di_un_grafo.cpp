/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 55 Esercizio - Implementazione di un grafo.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

struct node{
    double val;
    int next;
};

bool start(node A[], int i, int n) {
    bool test[n] = {false}, ricerca = false, fine = false;
    while (!ricerca && !fine) {
        node j = A[i];
        if (test[i]) {
            ricerca = true;
        } else if (j.next == -1) {
            fine = true;
        } else {
            test[i] = true;
            i = j.next;
        }
    }
    return ricerca;
}

bool nodes(node A[], int n) {
    bool flag = false;
    int i = 0;
    while (i <= n && !start(A, i, n)){
        if (start(A, i, n))
            flag = true;
        else
            i++;
    }
    return flag;
}

int main() {
    int n = 5;
    node A[n];
    for (int i = 0; i < n; i++) {
        A[i].next = i;
    }
    for (int i = n; i > 0; i--) {
        cout << nodes(A, n) << endl;
        A[i].next = i;
    }
}
