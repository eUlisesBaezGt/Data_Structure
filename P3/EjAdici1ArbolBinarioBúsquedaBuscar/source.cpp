#include "BinaryTree.h"
#include <iostream>

using namespace std;

int main()
{
	// Construir una aplicación que en un árbol binario de búsqueda de números enteros, busque un número dado y muestra
	// in-orden el subarbol que tiene como raiz el nodo encontrado.

	node* root;
	int choice, value;

	BinaryTree tree;

	do
	{
		cout << endl << "1. Insert" << endl;
		cout << "2. Search & Show subtree in order" << endl;
		cout << "0. Exit" << endl;

		cout << "Choice: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "Value: ";
			cin >> value;
			tree.create_tree(value);
			root = tree.get_root();
			tree.insert(root);
			break;
		case 2:
			cout << "Value: ";
			cin >> value;
			root = tree.get_root();
			tree.search(root, value);
			cout << endl;
			break;

		case 0:
			break;

		default:
			cout << "Invalid choice" << endl;
			break;
		}
	}
	while (choice != 0);


	return 0;
}
