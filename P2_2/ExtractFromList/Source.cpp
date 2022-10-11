#include "List.h"

#include <iostream>;
using namespace std;

//Empleando C++ construye una aplicaoån que implemente la operaciön INSERTAR en
//una LISTA ENLAZADA de palabras.Debe existJr la posibllldad de insertar al pnnapto,
//al final o intermedio.Tamblén se Pde la opaön de mostrar la lista cornpleta.

int main()
{
	list l;
	string x, n;
	int choice;

	do
	{
		cout << endl << "1. Insert at beginning" << endl;
		cout << "2. Insert at any position" << endl;
		cout << "3. Insert at end" << endl;
		cout << "4. Display" << endl;
		cout << "5. Extract at beginning" << endl;
		cout << "6. Extract at any position" << endl;
		cout << "7. Extract at end" << endl;
		cout << "0. Exit" << endl;

		cout << "Choice: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Enter the string to insert: ";
			cin >> x;
			l.insert_at_start(x);
			break;
		case 2:
			cout << "Enter the string to insert: ";
			cin >> x;
			cout << "After which string do you want to insert?: ";
			cin >> n;
			l.insert_aside(x, n);
			break;
		case 3:
			cout << "Enter the string to insert: ";
			cin >> x;
			l.insert_at_end(x);
			break;
		case 4:
			l.print();
			break;
		case 5:
			l.extract_at_start();
			break;
		case 6:
			cout << "String to extract?: ";
			cin >> x;
			l.extract(x);
			break;
		case 7:
			l.extract_at_end();
			break;
		default:
			cout << "Invalid choice" << endl;
			break;
		}
	}
	while (choice != 0);

	return 0;
}
