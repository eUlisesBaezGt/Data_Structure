//En el Foro Sol se llevará a cabo el concierto de Bad Bunny cantando con la Banda Limón.
//Los organizadores han decidido agradecer la preferencia del público, regalando un vale del 50 %
//de descuento para el siguiente concierto, a los compradores afortunados.
//Te han contratado para desarrollar una aplicación que maneje de forma estática la cola para comprar boletos.
//Durante todo el día estarán ingresando las solicitudes de boletos y al terminar cada día, sacarán una
//por una las solicitudes, en el orden en que llegaron.Todas las solicitudes que hayan llegado en una
//posición múltiplo de 5, ganarán un vale de descuento.
//Además de registrar las llegadas de solicitudes y extraer solicitudes para el premio, la aplicación
//debe mostrar los datos de cada comprador afortunado(nombre y número de boleto) y mostrar en cada
//momento los compradores que están en la fila.
//Construye la aplicación de manera que ocupe un arreglo no muy grande y que no desperdicie los
//elementos que se desocupan al extraer solicitudes.

#include <iostream>
#include "queue.h"
using namespace std;

int main()
{
	queue q;
	int choice, counter = 1;

	do
	{
		buyer b;
		cout << endl << endl << "------------- MAIN MENU -------------" << endl;
		cout << "1. New Ticket " << endl;
		cout << "2. Extract " << endl;
		cout << "3. Front " << endl;
		cout << "4. Back " << endl;
		cout << "5. Size " << endl;
		cout << "6. Print " << endl;
		cout << "7. See Lucky Ones according to actual queue " << endl;
		cout << "0. Exit " << endl;

		cout << "Choice: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "Name: ";
			cin >> b.name;
			cout << "Number: " << counter << endl;
			b.number = counter;
			q.enqueue(b);
			counter++;
			break;
		case 2:
			q.dequeue();
			break;
		case 3:
			q.front();
			break;
		case 4:
			q.back();
			break;
		case 5:
			cout << "Size: " << q.size();
			break;
		case 6:
			q.print();
			break;
		case 7:
			q.lucky_ones();
			break;
		case 0:
			cout << "Exiting......" << endl;
			break;
		}
	}
	while (choice != 0);
}
