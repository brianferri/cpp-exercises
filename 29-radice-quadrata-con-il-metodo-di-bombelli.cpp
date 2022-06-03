/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 29-radice-quadrata-con-il-metodo-di-bombelli.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

// EDIT OF ORIGINAL VERSION FOUND ON WIKIPEDIA

#include <iostream>
using namespace std;

 int intsqrt(int a, int* pr)
 // Dato l'intero positivo a, calcola la parte intera della
 // sua radice quadrata principale e il relativo resto;
 // pone il resto in *pr e ritorna la radice
 {
 int x, r, dp1, L, g[10], j, y,yn;
 // separa coppie di cifre e calcola numero delle cifre della radice
 L=0;
 while(a>0)
 {
   g[L++]=a%100;
   a /= 100;
 }
 // corsa per individuare le successive cifre della radice
 x=r=0;
 for(j=L-1;j>=0;j--)
 {
   r=r*100+g[j];  //somma al resto precedente moltiplicato per 100 il nuovo gruppo di 2 cifre
   y=0;  // determina cifra
   for(dp1=1;dp1<10;dp1++)
   {
     yn=dp1*(20*x+dp1);
     if(yn<=r) y=yn; else break;
   }
   x=x*10+dp1-1; r -= y;
 }
 *pr=r;
 return(x);
 }

int main() {
  int n;
  cout << "Inserisci un numero: ";
  cin >> n;
  cout << "la radice quadrata e:  " << intsqrt(n, 0);



//COPIATO DA WIKIPEDIA