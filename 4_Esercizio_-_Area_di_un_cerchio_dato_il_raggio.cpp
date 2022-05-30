/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 4 Esercizio - Area di un cerchio dato il raggio.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

int main() {

 const double PI = 3.14159; //approssimazione del PI greco
 int raggio; //lunghezza del raggio
 
 cout << "Per favore inserisci il raggio \n";
 cin >> raggio;

 cout << raggio << " cm di raggio == " << PI*raggio*raggio << " cm di area\n";
}