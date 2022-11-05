#include <iostream>
#include <queue>
using namespace std;

int main()
{
	queue<char> q, c;
	int choice;
	do
	{
		cout << endl << endl << "MAIN MENU" << endl;
		cout << "1. Add a character to the queue" << endl;
		cout << "2. Delete a character from the queue" << endl;
		cout << "3. Display the queue" << endl;
		cout << "4. Size" << endl;
		cout << "5. Show front" << endl;
		cout << "6. Show back" << endl;
		cout << "0. Exit" << endl;
		cout << "Enter your choice: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			char ch;
			cout << "Enter a character: ";
			cin >> ch;
			q.push(ch);
			break;
		case 2:
			if (q.empty())
				cout << "Queue is empty" << endl;
			else
			{
				cout << "Deleted character is " << q.front() << endl;
				q.pop();
			}
			break;
		case 3:
			if (q.empty())
				cout << "Queue is empty" << endl;
			else
			{
				c = q;
				cout << "Queue is: ";
				while (!c.empty())
				{
					cout << c.front() << " ";
					c.pop();
				}
			}
			break;
		case 4:
			cout << "Size of queue is " << q.size() << endl;
			break;
		case 5:
			if (q.empty())
				cout << "Queue is empty" << endl;
			else
				cout << "Front character is " << q.front() << endl;
			break;
		case 6:
			if (q.empty())
				cout << "Queue is empty" << endl;
			else
				cout << "Back character is " << q.back() << endl;
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
