#include<iostream>
#include <conio.h>
using namespace std;
int main(){
    int N,X,C=0,CP=0;
    cout<<"ingresar cantidad de numeros: ";
    cin>>N;
    while(C<N)
    {
	cout<<"Ingresar numero:" <<endl;
	cin>>X;
	if(X>0)
	CP=CP+1;
	C=C+1;
	}
	cout<<"la cantidad de positivos: " <<CP<<endl;
	getch();
	return 0;
} 
