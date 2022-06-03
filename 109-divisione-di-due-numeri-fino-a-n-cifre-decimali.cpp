/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 109-divisione-di-due-numeri-fino-a-n-cifre-decimali.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

int main(){
	int x, y, n;

	cout << "Inserire il numero dividendo: ";
	cin >> x;
	cout << "Inserire il numero divisore: ";
	cin >> y;
	cout << "Fino a quante cifre dopo la virgola vuoi calcolare?";
	cin >> n;

	if (y == 0) {
		cout << "Infinito" << endl;
		return 0;
	}
	if (x == 0) {
		cout << 0 << endl;
		return 0;
	}
	if (n <= 0) {
		cout << x / y << endl;
		return 0;
	}
	if (((x > 0) && (y < 0)) || ((x < 0) && (y > 0))) {
		cout << "-";
		x = x > 0 ? x : -x;
		y = y > 0 ? y : -y;
	}
	int d = x / y;

	for (int i = 0; i <= n; i++) {
		cout << d;
		x = x - (y * d);
		if (x == 0) {
			break;
		}
		x = x * 10;
		d = x / y;
		if (i == 0)
			cout << ".";
	}
	return 0;
}
