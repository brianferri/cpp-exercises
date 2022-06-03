/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 78-stack-is-empty-push-pop.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

int stack[10], n=10, top=-1;

void push(int val) {
   if(top>=n-1)
   cout << "Stack Overflow" << endl;
   else {
      top++;
      stack[top]=val;
   }
}

void pop() {
   if(top<=-1)
   cout << "Stack Underflow" << endl;
   else {
      cout << "L'elemento rimosso e' " <<  stack[top]  << endl;
      top--;
   }
}

void isempty() {
   if(top>=0) {
      cout << "Gli elementi della pila sono:";
      for(int i=top; i>=0; i--)
      cout << stack[i] << " ";
      cout << endl;
   } else
   cout << "La pila e' vuota" << endl;
}

int main() {
   int ch, val;
   cout << "1) Spingi in pila" << endl;
   cout << "2) Rimuovi un elemnto dalla lista (LIFO)" << endl;
   cout << "3) La pila e' vuota?" << endl;
   cout << "4) Esci" << endl;
   do {
      cout << "Scegli: ";
      cin >> ch;
      switch(ch) {
         case 1: {
            cout << "Numero da spingere:" << endl;
            cin >> val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            isempty();
            break;
         }
         case 4: {
            cout << endl << "Sto uscendo..." << endl;
            break;
         }
         default: {
            cout << "Scelta invalida" << endl;
         }
      }
   }while(ch!=4);
   return 0;
}
