#include <iostream>
#include "stack.h"

using namespace std;

int main() {
    Stack s;
    Employee e;
    s.isEmpty();

    int choice;

    do {
        cout << endl << "------------- MAIN MENU ------------- " << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Print" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout << endl;

        switch (choice) {
            case 1:
                cout << "Hiring" << endl;
                cout << "Enter ID: ";
                cin >> e.ID;
                cout << "Enter Name: ";
                cin >> e.Name;
                cout << "Enter Salary: ";
                cin >> e.Salary;
                s.push(e);
                break;
            case 2:
                cout << "Firing" << endl;
                s.pop();
                break;
            case 3:
                cout << "Showing" << endl;
                s.print();
                break;
            case 0:
                cout << "Exiting" << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    } while (choice != 0);
    cout << "Finished" << endl;
    return 0;
}
