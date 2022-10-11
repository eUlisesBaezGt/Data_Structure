#include "list.h"

#include <iostream>
#include <string>
using namespace std;

// Empleando C++ construye una aplicación que opere una Lista Ligada de números enteros.
// Las inserciones siempre deben hacerse de manera que la lista se mantenga en orden ascendente o creciente,
// es decir, de menor a mayor. Las operaciones disponibles deben ser Mostrar, Insertar y Extraer.


int main()
{
	list l;
	string x;
	int choice;

	do
	{
		cout << endl << "1. Display " << endl;
		cout << "2. Insert" << endl;
		cout << "3. Extract" << endl;
		cout << "0. Exit" << endl;

		cout << "Choice: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			l.print();
			break;
		case 2:
			cout << "Number to insert: ";
			cin >> x;
			l.insert(stoi(x));
			break;
		case 3:
			cout << "Number to extract: ";
			cin >> x;
			l.extract(stoi(x));
			break;
		default:
			cout << "Invalid choice" << endl;
			break;
		}
	}
	while (choice != 0);

	return 0;
}
