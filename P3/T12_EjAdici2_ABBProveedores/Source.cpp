#include <iostream>
#include <string>
#include "BinaryTree.h"

using namespace std;

int main()
{
	// Construir una aplicación que, construya un Árbol Binario de Búsqueda para los proveedores de una empresa.

	// Los datos de cada proveedor son el ID de tipo entero y el nombre, empleando el ID como llave de acceso al proveedor.

	/*Debe ofrecer las opciones :
	1) Insertar nuevos proveedores(de acuerdo al ID)
	2) Consultar proveedores por su ID y en caso de encontrarse, informar su nombre*/

	Node* root = nullptr;
	int choice, key;
	string name;
	BinaryTree bt;

	do
	{
		cout << endl << endl << "MAIN MENU" << endl;
		cout << "1) Insert supplier" << endl;
		cout << "2) Search supplier" << endl;

		cout << "0) Exit" << endl;

		cout << "Choice: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "Enter ID: ";
			cin >> key;
			cout << "Enter name: ";
			cin >> name;
			bt.create_tree({key, name});
			root = bt.get_root();
			bt.insert(root);
			break;

		case 2:
			cout << "Enter ID to search: ";
			cin >> key;
			root = bt.get_root();
			bt.search(root, key);
			break;

		case 0:
			cout << "Exiting..." << endl;
			break;

		default:
			cout << "Invalid choice" << endl;
			break;
		}
	}
	while (choice != 0);

	return 0;
}
