#include "CircularLinkedList.h"

using namespace std;

int main()
{
	int choice;
	string value, before;
	bool exists;
	CircularLinkedList l;

	do
	{
		cout << endl << "MAIN MENU" << endl;

		cout << "1. Print" << endl;
		cout << "2. Insert at any position" << endl;
		cout << "3. Delete" << endl;
		cout << "4. Search" << endl;
		cout << "5. Size" << endl;
		cout << "0. Exit" << endl;

		cout << "Choice: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			l.show_all_list();
			break;
		case 2:
			if (l.is_empty())
			{
				cout << "Enter value: ";
				cin >> value;
				l.insert_at_any_position(value, "");
			}
			else
			{
				cout << "Enter value: ";
				cin >> value;
				cout << "Enter before: ";
				cin >> before;
				l.insert_at_any_position(value, before);
			}
			break;
		case 3:
			cout << "Enter value: ";
			cin >> value;
			l.delete_element(value);
			break;
		case 4:
			cout << "Enter value: ";
			cin >> value;
			exists = l.search_word(value);
			CircularLinkedList::searched(exists);
			break;
		case 5:
			cout << "Size: " << l.size() << endl;
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
