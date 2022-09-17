#include<iostream>
#include <conio.h>
using namespace std;
int main(){
    int X,N,C=0,S=0;
    cout<<"ingresar cantidad de numeros: ";
    cin>>N;
    while(C<N)
    {
	cout<<"ingresar numero: ";
	cin>>X;
	S=S+X;
	C=C+1;
	}
	cout<<"La suma de los numeros es: " <<S;
	getch();
} 
