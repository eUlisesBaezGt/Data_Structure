#include <iostream>
#include "queue.h"

using namespace std;

int main()
{
	// Empleando C++ construye una aplicación que opera la llegada y descarga de trailers
	// en la Central de Abastos, mediante la implementación dinámica del TDA Cola.
	// Para cada tráiler se deben registrar sus placas y el producto que transporta.

	queue dock;
	int choice;

	do
	{
		trailer truck;
		cout << endl << "--------- MAIN MENU ---------" << endl;
		cout << "1. Arrival" << endl;
		cout << "2. Unloading" << endl;
		cout << "3. Show queue" << endl;
		cout << "4. Size" << endl;
		cout << "5. Show head" << endl;
		cout << "6. Show tail" << endl;
		cout << "7. Is empty?" << endl;
		cout << "0. Exit" << endl;

		cout << "CHOICE: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "Plate: ";
			cin >> truck.plate;
			cout << "Product: ";
			cin >> truck.product;
			dock.enqueue(truck);
			break;
		case 2:
			cout << "Unloading..." << endl;
			dock.dequeue();
			break;
		case 3:
			dock.print();
			break;
		case 4:
			cout << "Size: " << dock.size() << endl;
			break;
		case 5:
			dock.show_head();
			break;
		case 6:
			dock.show_tail();
			break;
		case 7:
			dock.is_empty();
			break;
		case 0:
			cout << "Bye!" << endl;
			break;
		default:
			cout << "Invalid choice" << endl;
		}
	}
	while (choice != 0);


	return 0;
}
