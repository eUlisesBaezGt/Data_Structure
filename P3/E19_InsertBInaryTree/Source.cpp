#include "BinaryTree.h"
#include <iostream>

using namespace std;

int main()
{
	node* root;
	int choice, value;

	BinaryTree tree;

	do
	{
		cout << endl << "1. Insert" << endl;
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
