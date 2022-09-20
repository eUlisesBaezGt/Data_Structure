#include "queue.h"

int main() {
    Queue queue;

    int choice;
    string value;

    do
    {
        cout << endl << "MAIN MENU" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Print" << endl;
        cout << "4. Show parameters" << endl;
        cout << "0. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            queue.enqueue(value);
            break;

        case 2:
            cout << "Dequeue: " << queue.dequeue() << endl;
            break;

        case 3:
            queue.print();
            break;

        case 4:
            queue.show_parameters();
            break;


        case 0:
            cout << "Bye!" << endl;
            break;

        default:
            cout << "Invalid choice" << endl;
            break;
        }

    } while (choice != 0);


    return 0;
}
