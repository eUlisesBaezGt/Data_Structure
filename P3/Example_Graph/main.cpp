#include "AdyMatrx.h"

int main()
{
	int n, choice, weight;
	char org, dest, value;

	cout << "Max number of nodes: ";
	cin >> n;
	AdyMatrx graph(n);

	do
	{
		cout << endl << "MAIN MENU" << endl;
		cout << "1) Add node" << endl;
		cout << "2) Add edge" << endl;
		cout << "3) View graph" << endl;
		cout << "0) Exit" << endl;

		cout << "Choice: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "Node value: ";
			cin >> value;
			graph.insert_node(value);
			break;
		case 2:
			cout << "Origin: ";
			cin >> org;
			cout << "Destination: ";
			cin >> dest;
			cout << "Weight: ";
			cin >> weight;
			graph.insert_edge(org, dest, weight);
			break;
		case 3:
			graph.show_full();
			break;
		case 0:
			cout << "EXITING..." << endl;
			break;
		default:
			cout << "Invalid choice" << endl;
			break;
		}
	}
	while (choice != 0);
}
