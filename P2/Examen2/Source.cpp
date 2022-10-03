#include "queue.h"
#include <string>

using namespace std;

// En la oficina de Caminos y Puentes se necesita una aplicación orientada a objetos en C++ que permita manejar la fila en la
// caseta de motocicletas. Para cada motocicleta se necesita conocer la marca y el número de cilindros. Construye la aplicación
// con la siguiente funcionalidad:
// a) Ingresar una motocicleta a la fila
// b) Pasar la siguiente motocicleta (extraer) para seguir mostrando sus datos
// c) Mostrar los datos de todas las motocicletas en la fila.

int main()
{
	queue q;
	int choice, cylinders;
	string plate;
	motorcycle m;

	do
	{
		cout << endl << " MAIN MENU " << endl;
		cout << "1. Add motorcycle to queue" << endl;
		cout << "2. Pay motorcycle" << endl;
		cout << "3. Print" << endl;
		cout << "4. Size" << endl;
		cout << "5. Show Head" << endl;
		cout << "6. Show Tail" << endl;
		cout << "7. Is Empty" << endl;
		cout << "0. Exit" << endl;

		cout << "Enter your choice: ";
		cin >> choice;
		cin.ignore();

		switch (choice)
		{
		case 1:
			cout << "Enter plate: ";
			cin >> plate;
			cout << "Enter cylinders: ";
			cin >> cylinders;
			m = motorcycle(plate, cylinders);
			q.add_motorcycle_to_queue(m);
			cout << "Motorcycle added" << endl;
			break;
		case 2:
			cout << q.pay_motorcycle().plate << " PAYED" << endl;
			break;
		case 3:
			q.show();
			break;
		case 4:
			cout << "Size: " << q.size() << endl;
			break;
		case 5:
			q.show_head();
			break;
		case 6:
			q.show_tail();
			break;
		case 7:
			q.is_empty();
			break;
		case 0:
			cout << "Bye!" << endl;
			break;
		default:
			cout << "Invalid choice" << endl;
		}
	}
	while (choice != 0);
}
