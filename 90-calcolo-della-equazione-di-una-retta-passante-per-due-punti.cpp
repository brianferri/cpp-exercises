/* 
 *  Author: Brian Ferri #0001040624
 *  
 *  Nome/Descrizione: 90-calcolo-della-equazione-di-una-retta-passante-per-due-punti.cpp
 *  
 *  INF-UNIBO 2021-2022
 *  Primo anno del Corso di laurea in Informatica
 */

#include <iostream>
using namespace std;

int main(){
	double x0,x1,y0,y1,m,q;

	cout<<"Inserire l'ascissa del primo punto: ";
	cin>>x0;

	cout<<"Inserire l'ordinata del primo punto: ";
	cin>>y0;

	cout<<"Inserire l'ascissa del secondo punto: ";
	cin>>x1;

	cout<<"Inserire l'ordinata del secondo punto: ";
	cin>>y1;

	if(x0==x1 && y0==y1) {
		cout << "Errore, I punti inseriti si sovrappongono!";
		return 0;
	}
	if(x0==x1){
		cout<<"\nL'equazione della retta è x="<<x0;
	}else{
		m=(y1-y0)/(x1-x0);
		q=((x0*y1)-(x1*y0))/(x0-x1);
		cout<<"L'equazione della retta è y = "<<m<<"x ";
		if (q>0){
			cout<<"+ "<<q;
		}else{
			cout<<q;
		}
	}
}
