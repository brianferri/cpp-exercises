/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 16 Esercizio - Ordinatore di tre numeri.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <algorithm>
#include <iostream>
using namespace std;

int sort3(int arr[]) {
    // Insert arr[1]
    if (arr[1] < arr[0])
       swap(arr[0], arr[1]);

    // Insert arr[2]
    if (arr[2] < arr[1])
    {
       swap(arr[1], arr[2]);
       if (arr[1] < arr[0])
          swap(arr[1], arr[0]);
    }
}

int main()
{
   cout << "Inserire tre numeri da ordinare: \n";
    int b,c,d;
    cin >> b >> c >> d;
    int a[] = {b, c, d};


    sort3(a);
    cout << "I numeri messi in ordine sono: ";
    for (int i = 0; i < 3; i++)
        cout << a[i] << " ";

    return 0;
}
