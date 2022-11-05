#include <stack>
#include <iostream>
using namespace std;

class Person
{
public:
	string name;
	int id;
};

int main()
{
	stack<Person> stack, copy;

	Person p;

	int choice;
	do
	{
		cout << endl << endl << "MAIN MENU" << endl;
		cout << "1. Add a person to the stack" << endl;
		cout << "2. Remove a person from the stack" << endl;
		cout << "3. Display the stack" << endl;
		cout << "4. Size of the stack" << endl;
		cout << "0. Exit" << endl;

		cout << "Enter your choice: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "Enter the id: ";
			cin >> p.id;
			cout << "Enter the name: ";
			cin >> p.name;
			stack.push(p);
			break;
		case 2:
			if (stack.empty())
				cout << "Stack is empty" << endl;
			else
			{
				p = stack.top();
				stack.pop();
				cout << "Removed " << p.name << endl;
			}
			break;
		case 3:
			if (stack.empty())
				cout << "Stack is empty" << endl;
			else
			{
				cout << "Stack contains: " << endl;
				copy = stack;
				while (!copy.empty())
				{
					p = copy.top();
					copy.pop();
					cout << p.id << " " << p.name << endl;
				}
			}
			break;
		case 4:
			cout << "Size of the stack is " << stack.size() << endl;
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
