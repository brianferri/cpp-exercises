/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 113-triangolo-di-floyd.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

int main(){
    int x, y = 1;

    cout << "Inserisci il numero di righe da stampare per il triangolo di floyd: ";
    cin >> x;

    for (int i = 1; i <= x; i++){
        for (int j = 1; j <= i; j++){
            cout << y << "\t";
            y++;
        }
        cout << endl;
    }
    return 0;
}
