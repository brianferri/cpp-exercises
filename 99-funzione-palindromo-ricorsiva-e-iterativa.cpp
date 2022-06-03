/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 99-funzione-palindromo-ricorsiva-e-iterativa.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
#include <cstring>
using namespace std;

bool palindromo_iterativo(char A[], int length) {
	int i = 0;
	int j = length - 1;
	bool pal = true;
	while ((i<j) && pal) {
		if (A[i] == A[j]) {
			i++;
			j--;
		} else {
			pal = false;
		}
	}
	return pal;
}

bool isPalRec(char A[], int s, int e) {
	if (s == e)
		return true;
	if (A[s] != A[e])
		return false;
	if (s < e + 1)
		return isPalRec(A, s + 1, e - 1);
	return true;
}
 
bool isPalindrome(char A[]) {
	int n = strlen(A);
	if (n == 0)
		return true; 
	return isPalRec(A, 0, n - 1);
}

int main() {
	char isnt[] = "palindromo";
	char is[] = "radar";

	cout << endl;
	cout << "Funzione iterativa: " << endl;
	cout << "'palindromo' ritorna: " << palindromo_iterativo(isnt, strlen(isnt)) << endl;
	cout << "'radar' ritorna: " << palindromo_iterativo(is, strlen(is)) << endl;
	
	cout << endl;
	cout << "Funzione ricorsiva: " << endl;
	cout << "'palindromo' ritorna: " << isPalindrome(isnt) << endl;
	cout << "'radar' ritorna: " << isPalindrome(is) << endl;
}