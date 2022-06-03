/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 48-triangolo-di-tartaglia.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

int main() {
    unsigned long long int righe, num = 1;
    cout << "Inserisci il numero di righe: ";
    cin >> righe;
    for(unsigned long long int i = 0; i < righe; i++) { //Ciclo per quante righe ci saranno
        for(unsigned long long int spazio = 1; spazio <= righe-i; spazio++) //Ciclo per inserire gli spazi per fare la piramide
            cout <<" \t";
        for(unsigned long long int j = 0; j <= i; j++) { //Ciclo per contare i numero e inserirli
            if (j == 0 || i == 0) //Se uno dei due cicli principali stanno iniziando o finendo inserire 1
                num = 1;
            else
                num = num*(i-j+1)/j; //Senno calcolare i numeri e inserirli nel mezzo
            cout << num << "\t";
        }
        cout << endl;
    }
    return 0;
}
