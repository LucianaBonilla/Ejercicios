#include <iostream>
using namespace std;
int main()
{
    cout << "Escriba una nota:: ";
    char nota;
    cin >> nota;
    
    switch(nota){
	case 'A': case 'a':
	cout<<"Excelente, aprobado con honor�ficos";
	break;
	case 'B': case 'b':
	cout<<"Aprobado de forma sobresaliente";
	break;
	case 'C': case 'c':
	cout<<"Aprobado con buen desempe�o"<<endl<<"o";
	break;
	case 'D': case 'd':
	cout<<"Aprobado de manera regular";
	break;
	case 'E': case 'e':
	cout<<"Aprobado, pero se sugiere mejorar";
	break;
	case 'F': case 'f':
	cout<<"Reprobado, con rendimiento escaso";
	break;
	default:
	cout<<"** ERROR, Nota ingresada es incorrecta **";
	}//Fin switch nota
} 			
