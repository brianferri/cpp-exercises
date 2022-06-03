/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 49-rettangolo-di-m-righe-e-n-colonne.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

int main () {
	int p_m, p_n, n;

	cout << "Quante righe vuoi per il tuo rettangolo: \n";
	cin >> p_m;
	cout << "Quante colonne vuoi per il tuo rettangolo: \n";
	cin >> p_n;

	n=p_n;

	while (p_m){
		while (n) {
			cout << "* ";
			n--;
		}
		p_m--;
		n=p_n;
		cout << endl;
	}
}
