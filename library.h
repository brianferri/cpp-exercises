#include "library.cpp"

//Inizializza a zero gli elementi di un array
void inizializzazione_array(int [], int);

//Genera un array di dimensione n di numeri casuali
void genera_elementi(int [], int, int);

//Stampa il contenuto di un array
void stampa_array(const int [], int, bool);

//Concatena due array
void concatena_array(const int [], const int [], int [], int, int);

//Trova il il numero mediano di un array
int mediano(int arr[]);

//Verifica se ci sono numeri uguali nell'array
int occurredOnce(int arr[], int n);

//Unisce due array
int unione(int arr1[], int lenArr1, int arr2[], int lenArr2, int uni[]);

//Converte stringa in uppercase
void uppercase(char arr[]);

//converte string in lowercase
void lowercase(char arr[]);

//Genera una barra dell'istogramma per una lunghezza massima
void istogramma(int max);

//Verifica se qualcosa e' dentro una stringa
bool Is_In(char str[], int k);

//Conta quante volte appare una lettere in una stringa
int conta(char arr[], char n);