/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 24 Esercizio - Valuta numero primo con ciclo for e flag.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

int main(){

   int num;
   bool flag = true;
   
   cout<<"Inserire un qualsiasi numero intero positivo: ";
   cin>>num;

   for(int i = 2; i <= num / 2 && flag; i++) {
      if(num % i == 0) {
         flag = false;
      }
   }
   
   if (flag==true)
      cout<<num<<" e' un numero primo";
   else
      cout<<num<<" NON e' un numero primo";
   
   return 0;
}
