/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 7-firewall-5-caratteri.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
#include <cctype>
using namespace std;
int main()
{
	char a,b,c,d,e;
	cout << "Inserire 5 lettere MAIUSCOLE e/o minuscole: \n";
	cin >> a >> b >> c >> d >>e;
	cout << "Le lettere da te inserite che sono minuscole sono: \n";
	if (islower(a)) {
		cout << 'a';
	}
	if (islower(b)) {
		cout << 'b';
	}
	if (islower(c)) {
		cout << 'c';
	}
	if (islower(d)) {
		cout << 'd';
	}
	if (islower(e)) {
		cout << 'e';
	}
	return 0;
}
