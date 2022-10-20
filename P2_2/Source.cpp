#include "lista.h"

#include <iostream>
#include <string>
using namespace std;

//Para servicio del aeropuerto, se solicita que, empleando programación orientada a objetos, construyas una aplicación para manejar en una lista enlazada los nombres de las líneas que llegan a dicho aeropuerto.La aplicación debe :
//
//a.Insertar y extraer
//
//b.Extraer todas las líneas de la lista y clasificarlas, insertando en una lista todos los nombres que inician con vocal y en otra lista todos los nombres que inician con consonante
//
//c.Mostrar la información de las tres listas


int main()
{
	list vowels, consonants, all_lines;
	string line;
	int choice;

	do
	{
		cout << endl << "MAIN MENU" << endl;
		cout << "USE ONLY LOWERCASE LETTERS" << endl;
		cout << "1. Insert line" << endl;
		cout << "2. Extract line" << endl;
		cout << "3. Extract & classify" << endl;
		cout << "4. Show all lines" << endl;
		cout << "0. Exit" << endl;


		cout << "Enter your choice: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "Enter line: ";
			cin >> line;
			all_lines.insert_at_end(line);
			break;

		case 2:
			if (!all_lines.is_empty())
			{
				cout << "Enter line: ";
				cin >> line;
				all_lines.delete_element(line);
			}
			else
			{
				cout << "List is empty" << endl;
			}

			break;


		case 3:
			if (!all_lines.is_empty())
			{
				while (!all_lines.is_empty())
				{
					line = all_lines.extract_head();
					if (line[0] == 'a' || line[0] == 'e' || line[0] == 'i' || line[0] == 'o' || line[0] == 'u')
						vowels.insert_at_end(line);
					else
						consonants.insert_at_end(line);
				}
			}
			else
			{
				cout << "List is empty" << endl;
			}
			break;

		case 4:
			cout << "All lines: " << endl;
			all_lines.show_full();
			cout << endl;
			cout << "Vowels: " << endl;
			vowels.show_full();
			cout << endl;
			cout << "Consonants: " << endl;
			consonants.show_full();
			cout << endl;
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
