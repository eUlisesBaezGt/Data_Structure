#include "BinaryTree.h"
#include <iostream>

using namespace std;

int main()
{
	node* root = nullptr;
	int choice, value;

	BinaryTree tree;

	do
	{
		cout << endl << "1. Insert" << endl;
		cout << "2. Inorder" << endl;
		cout << "3. Preorder" << endl;
		cout << "4. Postorder" << endl;
		cout << "5. Extract" << endl;
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
			cout << "Inorder: ";
			root = tree.get_root();
			tree.inorder(root);
			cout << endl;
			break;

		case 3:
			cout << "Preorder: ";
			root = tree.get_root();
			tree.preorder(root);
			cout << endl;
			break;

		case 4:
			cout << "Postorder: ";
			root = tree.get_root();
			tree.postorder(root);
			cout << endl;
			break;

		case 5:
			cout << "Extract: ";
			cin >> value;
			tree.extract(nullptr, root, value, "");
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
