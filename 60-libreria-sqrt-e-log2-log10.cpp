/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 60-libreria-sqrt-e-log2-log10.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

unsigned short int log2(unsigned short int n) {
    if (n == 0) {
        return 0;
    }
        unsigned short int logValue = -1;
    while (n) {//
        logValue++;
        n >>= 1;
    }
    return logValue;
}


unsigned int log(unsigned int a) {
    return log2(a) / log2(10);
}


int sqrt(int x) {
    if (x == 0 || x == 1)
    return x;
    int i = 1, result = 1;
    while (result <= x) {
      i++;
      result = i * i;
    }
    return i - 1;
}