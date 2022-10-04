#include "queue.h"
#include <string>

using namespace std;

/*En el consulado de México en Honduras se necesita una aplicación orientada a objetos en C++ que permita
manejar la fila de applicantas que solicitan asilo en México.  Para cada applicanta se necesita registrar su
nombre y los 3 dígitos de su pasaporte.*/

// Construye la aplicación con la siguiente funcionalidad :
// a.  Ingresar un solicitante a la fila
// b.  Pasar a entrevista (extraer) a la applicanta siguiente, mostrando sus datos.
// c.   Preguntar al usuario si fue aceptado o no el solicitante que pasó a entrevista. Si no fue aceptado 
// debe insertarse, con todos sus datos, en una fila de rechazados
// d.   Mostrar todos los datos de las applicantas en la fila de solicitantes y de las applicantas en la fila de 
// rechazados, haciendo notar el inicio y el final de cada fila



int main()
{
	queue requests, declined;
	int choice=0, digits;
	string name;
	applicant p, interviewed;

	do
	{
		cout << endl << " MAIN MENU " << endl;
		cout << "1. Add applicant to line" << endl;
		cout << "2. Pass to interview" << endl;
		cout << "3. Print" << endl;
		cout << "4. Size" << endl;
		cout << "5. Show Head" << endl;
		cout << "6. Show Tail" << endl;
		cout << "0. Exit" << endl;

		cout << "Enter your choice: ";
		cin >> choice;
		cin.ignore();
		cout << endl;

		switch (choice)
		{
		case 1:
			cout << endl;
			cout << "Enter name: ";
			cin >> name;
			cout << "Enter passport digits: ";
			cin >> digits;
			p = applicant(name, digits);
			requests.get_applicant_in_line(p);
			cout << "Got in line" << endl;
			break;
		case 2:
			cout << endl;
			interviewed = requests.pass_to_interview();
			interviewed.details();
			if (interviewed.name != "" && interviewed.digits != 0) {
				int acc;
				cout << "Was applicant accepted?: " << endl << "1) ACCEPTED\t2) DENIED: ";
				cin >> acc;
				if (acc == 2) declined.get_applicant_in_line(interviewed);
			}
			break;
		case 3:
			cout << endl;
			cout << "REQUESTS: " << endl;
			requests.show();
			cout << endl;
			cout << "DECLINED: " << endl;
			declined.show();
			cout << endl;
			break;
		case 4:
			cout << endl;
			cout << "REQUESTS Size: " << requests.size() << endl;
			cout << "DECLINED Size: " << declined.size() << endl;
			cout << endl;
			break;
		case 5:
			cout << endl;
			cout << "REQUESTS HEAD: " << endl;
			requests.show_head();
			cout << "DECLINED HEAD: " << endl;
			declined.show_head();
			cout << endl;
			break;
		case 6:
			cout << endl;
			cout << "REQUESTS TAIL: " << endl;
			requests.show_tail();
			cout << "DECLINED TAIL: " << endl;
			declined.show_tail();
			cout << endl;
			break;
		case 0:
			cout << endl;
			cout << "Bye!" << endl;
			break;
		default:
			cout << "Invalid choice" << endl;
		}
	} while (choice != 0);
}