#include "queue.h"
#include <string>

using namespace std;

int main()
{
	queue q;
	int choice, cylinders;
	string plate;
	motorcycle m;

	do
	{
		cout << endl << " MAIN MENU " << endl;
		cout << "1. Enqueue" << endl;
		cout << "2. Dequeue" << endl;
		cout << "3. Print" << endl;
		cout << "4. Size" << endl;
		cout << "5. Show Head" << endl;
		cout << "6. Show Tail" << endl;
		cout << "7. Is Empty" << endl;
		cout << "0. Exit" << endl;

		cout << "Enter your choice: ";
		cin >> choice;
		cin.ignore();

		switch (choice)
		{
		case 1:
			cout << "Enter plate: ";
			cin >> plate;
			cout << "Enter cylinders: ";
			cin >> cylinders;
			m = motorcycle(plate, cylinders);
			q.enqueue(m);
			cout << "Motorcycle added" << endl;
			break;
		case 2:
			cout << "Dequeued: " << q.dequeue().plate << endl;
			break;
		case 3:
			q.print();
			break;
		case 4:
			cout << "Size: " << q.size() << endl;
			break;
		case 5:
			q.show_head();
			break;
		case 6:
			q.show_tail();
			break;
		case 7:
			bool e = q.is_empty();
			break;
		case 0:
			cout << "Bye!" << endl;
			break;
		default:
			cout << "Invalid choice" << endl;
		}
	}
	while (choice != 0);
}
