#include "queue.h"
#include <string>

int main()
{
	/*En el supermercado •Mi preferido•, están teniendo problemas con la operaci6n de dos
	cajas, la C20 y C25.Para atender a los clientes formados en dichas cajas, van a abrir una
	nueva caja, la D10, y en ella los van intercalar respetando el orden actual, tomando uno de
	cada fila.Los tumos asignados tienen Ia forma de dos tetras y dos digitos, por ejemplo,
	RR15, RR08, SS45, TT21, etc.

	Empleando C++ construye una aplicacidn que, mediante Colas Ligadas, permita formar y
	atender clientes en las cajas QO y C25.A1 presentarse la falla en las dos primeras cajas,
	C20 y C25, pase todos los turnos a la nueva caja 010, intercalando uno de cada caja y
	respetando el orden actual.
	También debe ofrecer la opciån de Mostrar en cualquier momento cada una de las Filas.*/

	queue C20, C25, D10;
	string turn, queue;
	int choice;

	do
	{
		cout << endl << " MAIN MENU " << endl;
		cout << "1. Enqueue" << endl;
		cout << "2. Dequeue" << endl;
		cout << "3. Print" << endl;
		cout << "4. Merge queues " << endl;
		cout << "0. Exit" << endl;

		cout << "Enter your choice: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			{
				cout << "Enter the turn: ";
				cin >> turn;
				cout << "To which queue do you want to add the turn? (C20 / C25): ";
				cin >> queue;

				if (queue == "C20")
					C20.enqueue(turn);
				else if (queue == "C25")
					C25.enqueue(turn);
				else
					cout << "Invalid queue" << endl;
				break;
			}
		case 2:
			{
				cout << "From which queue do you want to remove the turn? (C20 / C25): ";
				cin >> queue;

				if (queue == "C20")
					C20.dequeue();
				else if (queue == "C25")
					C25.dequeue();
				else
					cout << "Invalid queue" << endl;
				break;
			}
		case 3:
			{
				cout << "C20: " << endl;
				C20.print();
				cout << "C25: " << endl;
				C25.print();
				cout << "D10: " << endl;
				D10.print();
				break;
			}
		case 4:
			{
				// If both queues have elements take 1 and 1, if one queue has elements and the other is empty take all the elements from the queue with elements
				while (!C20.isEmpty() || !C25.isEmpty())
				{
					if (!C20.isEmpty())
						D10.enqueue(C20.dequeue());
					if (!C25.isEmpty())
						D10.enqueue(C25.dequeue());
				}
				break;
			}
		default:
			cout << "Invalid option" << endl;
			break;
		}
	}
	while (choice != 0);
}
