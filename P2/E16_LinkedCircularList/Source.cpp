#include <iostream>

#include "circular_list.h"

using namespace std;

int main()
{
	int choice, number;
	circular_list l;

	do
	{
		cout << endl << "MAIN MENU" << endl;
		cout << "1. Insert at end" << endl;
		cout << "2. Search" << endl;
		cout << "3. Print" << endl;
		cout << "4. Size" << endl;
		cout << "0. Exit" << endl;
		cout << "Choice: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "Enter number: ";
			cin >> number;
			l.insert_at_end(number);
			break;
		case 2:
			if (l.size() == 0) cout << "List is empty" << endl;
			else
			{
				cout << "Enter number: ";
				cin >> number;
				const bool status = l.search(number);
				circular_list::exists(status);
			}
			break;
		case 3:
			if (l.size() == 0) cout << "List is empty" << endl;
			l.print();
			break;
		case 4:
			if (l.size() == 0) cout << "List is empty" << endl;
			else cout << "Size of list is: " << l.size() << endl;
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
