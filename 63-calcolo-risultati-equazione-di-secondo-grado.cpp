/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 63-calcolo-risultati-equazione-di-secondo-grado.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

double pow(double a, double b) {
	double p = 1;
		while(b>0){
			p = p * a;
			b--;
		}
	return p;
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

int main() {
	float a, b, c, x, x2;

	cout << "Inserire la i tre termini: \n";
	cin >> a >> b >> c;

	x = (-b + sqrt(pow(b, 2) - (4 * (a * c)))) / (2 * a);
	x2 = (-b - sqrt(pow(b, 2) - (4 * (a * c)))) / (2 * a);

	cout << "Il primo risultato del calcolo e': " << x;
	cout << "\nIl secondo risultato del calcolo e': " << x2;
}