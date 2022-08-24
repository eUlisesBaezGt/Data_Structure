#include <iostream>
#include "business.h"

using namespace std;

int main() {
    business b;
    // create two initial employees
    employee e1 = {"Mary", 180, 1000};
    employee e2 = {"John", 160, 900};

    // insert the employees in the array
    b.team[0] = e1;
    b.team[1] = e2;

    int option;

    do {
        cout <<endl;
        cout << "MAIN MENU......................." << endl;
        cout << "1. Show" << endl;
        cout << "2. Sort" << endl;
        cout << "3. Insert" << endl;
        cout << "4. Delete" << endl;
        cout << "0. Exit" << endl;

        cout << "Option: ";
        cin >> option;

        switch (option) {
            case 1:
                b.show(b.team);
                break;
            case 2:
                b.sort(b.team,1);
                break;
            case 3:
                b.insert(b.team);
                break;
            case 4:
                b.deletee(b.team);
                break;
            case 0:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid option" << endl;
        }
    } while (option != 0);

    return 0;
}
