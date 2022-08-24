#include <iostream>
#include "Catalogue.h"

int main() {
    Catalogue catalogue;
    int opc;
    do {
        cout << endl;
        cout << "-----------------MAIN MENU-----------------" << endl;
        cout << "1. Show All" << endl;
        cout << "2. Search" << endl;
        cout << "3. Add" << endl;
        cout << "0. Exit" << endl;
        cout << "Option: ";
        cin >> opc;
        switch (opc) {
            case 1:
                catalogue.show_all();
                break;
            case 2:
                catalogue.search();
                break;
            case 3:
                catalogue.add();
                break;
            case 0:
                break;
            default:
                cout << "Invalid option" << endl;
                break;
        }
    } while (opc != 0);
    cout << "-----------------END-----------------" << endl;
    return 0;
}
