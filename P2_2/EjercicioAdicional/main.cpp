#include "LinkedList.h"

#include <iostream>
#include <string>
using namespace std;

// Elaborar un programa que permita construir dos listas enlazadas, lista A y lista B

// a) Permita insertar números enteros en cada una de las listas, dando la opción de escoger, con cada número, la lista en la que se quiere insertar.
// b) Cada número se debe insertar en un lugar adecuado para que la lista esté ordenada de menor a mayor.
// c) Ofrecer la opción "combinar". Esta opción debe construir la lista C. Para esto debe extraer todos los números de la lista A y de la lista B, insertándolos en la lista C, de la manera adecuada para que esta lista quede ordewnada de menor y mayor.
// d) Posibiilidad de mostrar las tres listas en cualquier momento.


int main()
{
	LinkedList a, b, c;
	string x;
	int choice, number;

	do
	{
		cout << endl << "MAIN MENU" << endl;
		cout << "1. Insert number" << endl;
		cout << "2. Print lists" << endl;
		cout << "3. Merge lists" << endl;
		cout << "0. Exit" << endl;

		cout << "Enter your choice: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "Enter number: ";
			cin >> number;
			cout << "Enter list (A or B): ";
			cin >> x;
			if (x == "A") a.insert(number);
			else if (x == "B")b.insert(number);
			else cout << "Invalid list" << endl;
			break;

		case 2:
			cout << "List A: ";
			a.print();
			cout << "List B: ";
			b.print();
			cout << "List C: ";
			c.print();
			break;

		case 3:
			// COPY LIST A TO LIST C
			while (!a.is_empty()) c.insert(a.extract_head());
		// MOVE ELEMENTS FROM B TO C, KEEPING ORDER
			while (!b.is_empty()) c.insert(b.extract_head());
			cout << "Lists merged" << endl;
			break;

		case 0:
			cout << "Bye!" << endl;
			break;
		default:
			cout << "Invalid option" << endl;
		}
	}
	while (choice != 0);

	return 0;
}
