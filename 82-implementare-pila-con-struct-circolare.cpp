/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 82-implementare-pila-con-struct-circolare.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

const int lenght = 10;

//Da sinistra verso destra: Testa a sinistra, coda a destra.
struct Coda {
	int arr[lenght];
	int testa;
	int coda;
};

//Crea una coda.
Coda createCoda(){
	Coda creatingCoda;
	creatingCoda.testa = 0;
	creatingCoda.coda = 0;
	return creatingCoda;
}

//Aggiunge un elemento in coda
bool addToQueue(Coda& coda, int element){
	bool output = false;
	if(coda.coda - coda.testa < lenght){
		coda.arr[coda.coda % lenght] = element;
		coda.coda = coda.coda + 1;
		output = true;
	}
	return output;
}

//Rimuove l'elemento in testa dalla coda.
bool removeFromQueue(Coda& coda){
	bool output = false;
	if(coda.coda > coda.testa){
		coda.testa = coda.testa + 1;
		output = true;
	}
	return output;
}

void printCoda(Coda& coda){
	for(int i = coda.testa; i < coda.coda; i++){
		cout << i%lenght << " : " << coda.arr[i%lenght] << endl;
	}
}

int main() {

	Coda test = createCoda();
	/*
	bool res = removeFromQueue(test);
	if(res == false){
		cout << "Errore" << endl;
	}
	*/

	addToQueue(test, 1);
	addToQueue(test, 1);
	addToQueue(test, 1);
	addToQueue(test, 1);
	addToQueue(test, 2);
	addToQueue(test, 2);
	addToQueue(test, 2);
	addToQueue(test, 2);
	addToQueue(test, 3);
	addToQueue(test, 3);
	removeFromQueue(test);
	removeFromQueue(test);
	if(!addToQueue(test, 3)){
		cout << "Errore" << endl;
	}
	printCoda(test);
	return -1;



	return 0;
}
