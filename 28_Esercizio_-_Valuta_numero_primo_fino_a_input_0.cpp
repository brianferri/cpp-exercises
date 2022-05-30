/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 28 Esercizio - Valuta numero primo fino a input 0.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

int primo(int num);

int main() {
   int a;

   cout << "\nInserisci un numero da essere valutato: ";
   cin >> a;

   if (a!=0){
      primo(a);
   }
}

int primo(int num){
   bool flag = true;

   for(int i = 2; i <= num / 2; i++) {
      if(num % i == 0) {
         flag = false;
         break;
      }
   }
   if (flag==true)
      cout<<num<<" e' un numero primo";
   else
      cout<<num<<" non e' un numero primo";
   return main();
}
