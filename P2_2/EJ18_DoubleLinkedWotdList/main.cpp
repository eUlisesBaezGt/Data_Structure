#include "DoubleLinkedWorldList.h"

using namespace std;

int main()
{
	int choice;
	string value, before;
	DoubleLinkedWorldList list;

	do
	{
		cout << endl << "MAIN MENU" << endl;

		cout << "1) Insert element at any position" << endl;
		cout << "2) Delete element" << endl;
		cout << "3) Show list from head to tail" << endl;
		cout << "4) Show list from tail to head" << endl;
		cout << "5) Size" << endl;
		cout << "0) Exit" << endl;

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
				cout << "Enter after: ";
				cin >> before;
				list.insert_at_any_position(value, before);
			}
			break;

		case 2:
			cout << "Enter value: ";
			cin >> value;
			list.delete_element(value);
			break;

		case 3:
			list.show_head_to_tail();
			break;

		case 4:
			list.show_tail_to_head();
			break;

		case 5:
			cout << "Size: " << list.size() << endl;
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
