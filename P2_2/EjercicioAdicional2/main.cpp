#include <iostream>

#include "LinkedCircularList.h"

using namespace std;

int main()
{
	int choice;
	string value;
	LinkedCircularList list;

	do
	{
		cout << endl << "MAIN MENU" << endl;
		cout << "1. Insert at end" << endl;
		cout << "2. Delete element" << endl;
		cout << "3. Show from head to tail" << endl;
		cout << "4. Show from word to previous word" << endl;
		cout << "0. Exit" << endl;
		cout << "Choice: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "Enter value: ";
			cin >> value;
			list.insert_at_end(value);
			break;
		case 2:
			if (list.is_empty()) cout << "List is empty" << endl;
			else
			{
				cout << "Enter value: ";
				cin >> value;
				list.delete_element(value);
			}
		case 3:
			if (list.is_empty()) cout << "List is empty" << endl;
			else list.show_from_head_to_tail();
			break;
		case 4:
			if (list.is_empty()) cout << "List is empty" << endl;
			else
			{
				cout << "Enter value: ";
				cin >> value;
				list.show_from_word_to_previous_word(value);
			}
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
