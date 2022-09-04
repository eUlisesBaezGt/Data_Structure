#include "Factory.h"

int main() {
    bool created = false;
    int choice;
    Factory *factory = nullptr;
    while (true) {
        cout << endl << endl;
        cout << "--------------MAIN MENU--------------" << endl;
        cout << "1. Create factory" << endl;
        cout << "2. Register employees" << endl;
        cout << "3. Show employees" << endl;
        cout << "4. Sort employees" << endl;
        cout << "5. Exit" << endl;
        cout << "Choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                if (created) {
                    cout << "Factory already created" << endl;
                } else {
                    factory = new Factory();
                    created = true;
                }
                break;
            case 2:
                if (created) {
                    factory->Register();
                } else {
                    cout << "Factory not created" << endl;
                }
                break;
            case 3:
                if (created) {
                    factory->Show();
                } else {
                    cout << "Factory not created" << endl;
                }
                break;
            case 4:
                if (created) {
                    factory->Sort();
                    factory->Show();
                } else {
                    cout << "Factory not created" << endl;
                }
                break;
            case 5:
                if (created) {
                    delete factory;
                }
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice" << endl;
        }
    }
}
