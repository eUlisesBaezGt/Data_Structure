#include <iostream>

#include "CircularLinkedList.h"

using namespace std;

int main()
{
	int choice;
	string value, before;

	circular_linked_list list;

	do
	{
		cout << endl << "MAIN MENU" << endl;

		cout << "1. Insert name at any position" << endl;
		cout << "2. Size of list" << endl;
		cout << "3. Delete odd names" << endl;
		cout << "4. Show all names" << endl;
		cout << "0. Exit" << endl;

		cout << "Choice: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			if (list.is_empty())
			{
				cout << "Enter value: ";
				cin >> value;
				list.insert_at_any_position(value, "");
			}
			else
			{
				cout << "Enter value: ";
				cin >> value;
				cout << "Enter before: ";
				cin >> before;
				list.insert_at_any_position(value, before);
			}
			break;
		case 2:
			cout << "Size of list: " << list.size() << endl;
			break;
		case 3:
			list.odd_cycle();
			cout << "Finished cycling and deleting odd nodes" << endl;
			break;
		case 4:
			list.show_all_list();
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
