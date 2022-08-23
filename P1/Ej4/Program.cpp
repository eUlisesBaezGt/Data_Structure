#include "Program.h"

#include <iostream>
#define num 3

using namespace std;

// Escribir el código del un algoritmo que registre las sucursales de una cadena de tiendas.
// Que registre el número de sucursal, el nombre del gerente y el importe de ventas de los últimos 2 meses. (arreglos)
// Que los ordene en forma ascendente del acuerdo al número de sucursal, empleando el método de la burbuja.

Program::Program() = default;

void Program::AskData(Branch offices[])
{
	for (int i = 0; i < num; i++)
	{
		cout << "Branch " << i + 1 << ": " << endl;
		cout << "Number: ";
		cin >> offices[i].id;
		cout << "Manager: ";
		cin >> offices[i].manager;
		for (int j = 0; j < 2; j++)
		{
			cout << "Sales " << j + 1 << ": ";
			cin >> offices[i].sales[j];
		}
		cout << endl;
	}
	cout << "---------------------" << endl;
	cout << endl;
}

void Program::OrderID(Branch offices[])
{
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num - 1; j++)
		{
			if (offices[j].id > offices[j + 1].id)
			{
				Branch temp = offices[j];
				offices[j] = offices[j + 1];
				offices[j + 1] = temp;
			}
		}
	}
}

void Program::ShowData(Branch offices[])
{
	for (int i = 0; i < num; i++)
	{
		cout << "Branch " << i + 1 << ": " << endl;
		cout << "Number: " << offices[i].id << endl;
		cout << "Manager: " << offices[i].manager << endl;
		cout << "Sales: |";
		for (int j = 0; j < 2; j++)
		{
			cout << offices[i].sales[j] << "|";
		}
		cout << endl;
		cout << "---------------------" << endl;
	}
	cout << endl;
}

void Program::run()
{
	Branch offices[num];
	AskData(offices);
	OrderID(offices);
	ShowData(offices);
}
