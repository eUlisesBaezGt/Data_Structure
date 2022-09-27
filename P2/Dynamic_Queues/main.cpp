#include "queue.h"
#include <string>

int main()
{
    queue q;
    int choice;
    string data;

    do
    {
        cout << endl << " MAIN MENU " << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Print" << endl;
        cout << "4. Size" << endl;
        cout << "5. Show Head" << endl;
        cout << "6. Show Tail" << endl;
        cout << "7. Is Empty" << endl;
        cout << "0. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
        case 1:
            cout << "Enter phrase: ";
            getline(cin, data);
            q.enqueue(data);
            break;
        case 2:
            cout << "Dequeued: " << q.dequeue() << endl;
            break;
        case 3:
            q.print();
            break;
        case 4:
            cout << "Size: " << q.size() << endl;
            break;
        case 5:
            q.show_head();
            break;
        case 6:
            q.show_tail();
            break;
        case 7:
            q.is_empty();
            break;
        case 0:
            cout << "Bye!" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
        }

    } while (choice != 0);
}
