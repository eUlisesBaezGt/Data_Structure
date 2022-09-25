//En el Foro Sol se llevar� a cabo el concierto de Bad Bunny cantando con la Banda Lim�n.
//Los organizadores han decidido agradecer la preferencia del p�blico, regalando un vale del 50 %
//de descuento para el siguiente concierto, a los compradores afortunados.
//Te han contratado para desarrollar una aplicaci�n que maneje de forma est�tica la cola para comprar boletos.
//Durante todo el d�a estar�n ingresando las solicitudes de boletos y al terminar cada d�a, sacar�n una
//por una las solicitudes, en el orden en que llegaron.Todas las solicitudes que hayan llegado en una
//posici�n m�ltiplo de 5, ganar�n un vale de descuento.
//Adem�s de registrar las llegadas de solicitudes y extraer solicitudes para el premio, la aplicaci�n
//debe mostrar los datos de cada comprador afortunado(nombre y n�mero de boleto) y mostrar en cada
//momento los compradores que est�n en la fila.
//Construye la aplicaci�n de manera que ocupe un arreglo no muy grande y que no desperdicie los
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
