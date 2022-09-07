#include "stack.h"


int main() {

    int choice;
    stack stack;
    string model;

    cout << "Starting" << endl;

    do {
        cout << endl;
        cout << "MAIN MENU" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Show stack" << endl;
        cout << "4. Show head element" << endl;
        cout << "0. Exit" << endl;

        cout << "Choice: ";
        cin >> choice;
        cout << endl;

        switch (choice) {
        case 1:
            cout << "Pushing..." << endl;
            cout << "Enter a model: ";
            cin >> model;
            stack.push(model);
            break;

        case 2:
            cout << "Popping..." << endl;
            stack.pop();
            break;

        case 3:
            cout << "Showing..." << endl;
            stack.show();
            cout << "Showed!" << endl;
            break;

        case 4:
            cout << "Showing head element..." << endl;
            cout << stack.top() << endl;
            break;

        case 0:
            cout << "Pressed 0" << endl;
            break;
        default:
            cout << "Invalid option" << endl;
        }
    } while (choice != 0);
    cout << "Exiting" << endl;

    return 0;
}
