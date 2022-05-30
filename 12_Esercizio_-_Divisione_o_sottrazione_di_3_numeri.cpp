/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 12 Esercizio - Divisione o sottrazione di 3 numeri.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	char operazione;

	cout << "Inserire 3 numeri da sottrare o dividere a due a due: \n";
	cin >> a;
	cin >> b;
	cin >> c;

	cout <<"Se vuoi sottrare i numeri inseriti manda in out '-', se li vuoi dividere '/': \n";
	cin >> operazione;

	if (operazione == '-') {
		cout << "Ecco il risultato delle operazioni: \n";
		cout << "\t" << a << "\t" << b << "\t" << c << endl;
		cout << a << "\t" << a-a << "\t" << a-b << "\t" << a-c << endl;
		cout << b << "\t" << b-a << "\t" << b-b << "\t" << b-c << endl;
		cout << c << "\t" << c-a << "\t" << c-b << "\t" << c-c << endl;
	}
	if (operazione == '/') {
		cout << "Ecco il risultato delle operazioni: \n";
		cout << "\t" << a << "\t" << b << "\t" << c << endl;
		cout << a << "\t" << a/a << "\t" << a/b << "\t" << a/c << endl;
		cout << b << "\t" << b/a << "\t" << b/b << "\t" << b/c << endl;
		cout << c << "\t" << c/a << "\t" << c/b << "\t" << c/c << endl;
	}
	if (operazione != '-' && operazione != '/') {
		cout << "L'operatore inserito non e' valido!\n";
		return main();
	}
}
