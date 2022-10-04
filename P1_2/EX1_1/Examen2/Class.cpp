#include "Class.h"

#include <iostream>

using namespace std;

void Class::Register()
{
	for (int i = 0; i < 3; i++)
	{
		cout << "Registering " << i << endl;
		Municipio temp;
		cout << "Name: "; cin >> temp.name;
		cout << "Population: "; cin >> temp.population;
		cout << "president: "; cin >> temp.president;
	}
}

void Class::show()
{
	for (auto& municipio : municipios)
	{
		// if not empty cout
		cout << municipio.name << endl;
			cout << municipio.population << endl;
			cout << municipio.president << endl;
	}
}
