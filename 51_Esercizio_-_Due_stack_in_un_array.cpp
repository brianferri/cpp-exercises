/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 51 Esercizio - Due stack in un array.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

class twoStacks {
	int* arr;
	int size;
	int top1, top2;

public:
	twoStacks(int n){
		size = n;
		arr = new int[n];
		top1 = n / 2 + 1;
		top2 = n / 2;
	}

	void push1(int x){
		if (top1 > 0) {
			top1--;
			arr[top1] = x;
		}
		else {
			cout << "Stack Overflow"
				<< " Per L'elemento :" << x << endl;
			return;
		}
	}

	void push2(int x){
		if (top2 < size - 1) {
			top2++;
			arr[top2] = x;
		}
		else {
			cout << "Stack Overflow"
				<< " Per L'elemento :" << x << endl;
			return;
		}
	}

	int pop1(){
		if (top1 <= size / 2) {
			int x = arr[top1];
			top1++;
			return x;
		}
		else {
			cout << "Stack UnderFlow";
			exit(1);
		}
	}

	int pop2(){
		if (top2 >= size / 2 + 1) {
			int x = arr[top2];
			top2--;
			return x;
		}
		else {
			cout << "Stack UnderFlow";
			exit(1);
		}
	}

	void isempty1() {
		if(top1>=0) {
			cout << "L'ultimo elemento della pila e':";
			for(int i=top1; i>=top1; i--)
				cout << arr[i] << " ";
			cout << endl;
		} else
		cout << "La pila e' vuota" << endl;
	}

	void isempty2() {
		if(top2>=0) {
			cout << "L'ultimo elemento della pila e':";
			for(int i=top2; i>=top2; i--)
				cout << arr[i] << " ";
			cout << endl;
		} else
		cout << "La pila e' vuota" << endl;
	}
};


int main() {
	int n;
	cout << "Inserisci la lunghezza che vuoi per le tue pile: ";
	cin >> n;

	twoStacks ts(n);
	int ch, ch1, val;

	cout << "1) Modifica la prima pila" << endl;
	cout << "2) Modifica la seconda pila" << endl;
	cout << "3) Esci dal programma" << endl;

	do {
		cin >> ch1;
		switch(ch1) {
			case 1: {
				cout << "1) Spingi in pila" << endl;
				cout << "2) Rimuovi un elemento dalla pila (LIFO)" << endl;
				cout << "3) La pila e' vuota?" << endl;
				cout << "4) Exit" << endl;
				do {
					cout << "Scegli: ";
					cin >> ch;
					switch(ch) {
						case 1: {
							cout << "Inserici un numero da spingere nella pila:" << endl;
							cin >> val;
							ts.push1(val);
							break;
						}
						case 2: {
							cout << "Elemento rimosso dalla pila1 e': " << ts.pop1() << endl;
							break;
						}
						case 3: {
							ts.isempty1();
							break;
						}
						case 4: {
							cout << endl << "Sto uscendo..." << endl;
							main();
							break;
						}
						default: {
							cout << "Scelta invalida" << endl;
						}
					}
				}while(ch!=4);
				break;
			}
			case 2: {
				cout << "1) Spingi in pila" << endl;
				cout << "2) Rimuovi un elemento dalla pila (LIFO)" << endl;
				cout << "3) La pila e' vuota?" << endl;
				cout << "4) Exit" << endl;
				do {
					cout << "Scegli: ";
					cin >> ch;
					switch(ch) {
						case 1: {
							cout << "Inserici un numero da spingere nella pila:" << endl;
							cin >> val;
							ts.push2(val);
							break;
						}
						case 2: {
							cout << "Elemento rimosso dalla pila2 e': " << ts.pop2() << endl;
							break;
						}
						case 3: {
							ts.isempty2();
							break;
						}
						case 4: {
							cout << endl << "Sto uscendo..." << endl;
							main();
							break;
						}
						default: {
							cout << "Scelta invalida" << endl;
						}
					}
				}while(ch!=4);
				break;
			}
			case 3: {
				cout << "Sto uscendo..." << endl;
				break;
			}
			default: {
				cout << "Scelta invalida" << endl;
			}
		}
	} while (ch1!=3);
	return 0;
}