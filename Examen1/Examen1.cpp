#include "Team.h"

using namespace std;

/*Construye con C++ una aplicación que almacene en un arreglo la estatura, y solo la estatura, en centímetros de cada uno de los
 miembros de un equipo de futbol.Por ejemplo 167

a)     Inicializa el arreglo en orden, sin llenarlo, dejando espacios libres

b)    Que permita registrar estaturas en orden, para mantener el orden ascendente

c)    Mostrar todas las estaturas registradas en el arreglo*/

int main()
{
	Team t;
	int arr [SIZE] = {167,181,190};

	for (int i = 0; i < SIZE; i++)
	{
		t.heights[i] = arr[i];     // A)
	}

	int opc;
	do
	{
		cout << endl;
		cout << "----------MAIN MENU---------------" << endl;
		cout << "1. Register" << endl;
		cout << "2. Show All" << endl;

		cout << "Option:";
		cin >> opc;
		
		switch (opc)
		{
		case 1:
			cout << "----------REGISTER---------------" << endl;   // B)
			t.insert();
			break;
		case 2:
			cout << "----------SHOW ALL---------------" << endl;  // C)
			t.show();
			break;
		case 0:
			break;
		default:
				cout << "Please try again" << endl;
				break;
		}
	}
	while (opc!=0);
	cout << "----------FINISHING---------------" << endl;
}
