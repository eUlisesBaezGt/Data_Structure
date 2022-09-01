#include "TwoDimArr.h"

int main() {
    cout << "Starting program" << endl;
    int opt;

    cout << "Create array" << endl;
    cout << "Rows: ";
    int rows;
    cin >> rows;
    cout << "Columns: ";
    int cols;
    cin >> cols;
    TwoDimArr arr(rows, cols);

    do {
        cout << "-------MAIN MENU--------" << endl;
        cout << "1. Set Name" << endl; // Read a full name (getline) and create a int bidimensional dinamic array
        cout << "2. Fill elements" << endl; // Add elements to the matrix
        cout << "3. Show matrix" << endl; // Print the matrix
        cout << "4. Sort lines of matrix" << endl;
        cout << "0. Exit" << endl;
        cout << "-------------------------" << endl;
        cout << "Option: ";
        cin >> opt;

        switch (opt) {
            case 1:
                cout << "---Set Name---" << endl;
                arr.nam();
                break;
            case 2:
                cout << "---Fill elements---" << endl;
                arr.fill();
                break;
            case 3:
                cout << "---Show matrix---" << endl;
                arr.show();
                break;
            case 4:
                cout << "---Sorting---" << endl;
                arr.sort();
                arr.show();
                break;
            case 0:
                cout << "Exiting program" << endl;
                break;
            default:
                cout << "Invalid option" << endl;
                break;
        }
    } while (opt != 0);
    return 0;
}
