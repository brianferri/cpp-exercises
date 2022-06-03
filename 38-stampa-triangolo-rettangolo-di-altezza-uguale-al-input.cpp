/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 38-stampa-triangolo-rettangolo-di-altezza-uguale-al-input.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

int main() {

  int i, j, n;
  cout << "Inserire il numero di righe per il tuo triangolo: ";
  cin >> n;

  for(i=1;i<=n;i++) {
    for(j=1;j<=i;j++) {
      cout<<"* ";
    }
    cout<<endl;
  }

}