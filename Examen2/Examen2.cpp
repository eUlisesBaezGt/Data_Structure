
#include <iostream>
#include "Class.h"

using namespace std;

int main()
{
	Class t;

	int opc;
	do
	{
		cout << endl;
		cout << "----------MAIN MENU---------------" << endl;
		cout << "1. Register" << endl;
		cout << "2. Show All" << endl;

		cout << "Option:";
		cin >> opc;

		switch (opc)
		{
		case 1:
			cout << "----------REGISTER---------------" << endl;   // B)
			t.Register();
			break;
		case 2:
			cout << "----------SHOW ALL---------------" << endl;  // C)
			t.show();
			break;
		case 0:
			break;
		default:
			cout << "Please try again" << endl;
			break;
		}
	} while (opc != 0);
	cout << "----------FINISHING---------------" << endl;
}