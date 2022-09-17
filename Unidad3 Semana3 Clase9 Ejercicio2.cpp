#include <iostream>

using namespace std;
int main()
{
	int opcion = 0;
	do
	{
	    cout << "Ingrese 1 para mostrar mensaje\n";
	    cout << "Ingrese 2 para realizar algo mas\n";
	    cout << "Ingrese 0 para salir\n";
	    
	    cout << "Ingrese una opcion a ejecutar\n";
	    cin >> opcion;
	}
	//Mostramos el menu hasta que la opción sea cero
	while(opcion != 0);
	system("PAUSE");
	return 0;
} 
