#include <iostream>

#include "list.h"

using namespace std;

int main()
{
	list l;
	int choice;
	motorcycle m;
	string plate;


	do
	{
		cout << endl << "MAIN MENU" << endl;

		cout << "1. Insert motorcycle at end" << endl;
		cout << "2. Delete name at any position" << endl;
		cout << "3. Show all motorcycles" << endl;
		cout << "4. Exit" << endl;

		cout << "Enter your choice: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "Enter plate: ";
			cin >> m.plate;
			cout << "Enter cylinders: ";
			cin >> m.cylinders;
			l.insert_at_end(m);
			break;

		case 2:
			cout << "Enter plate: ";
			cin >> plate;
			l.extract(plate);
			break;

		case 3:
			l.show_all_list();
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
