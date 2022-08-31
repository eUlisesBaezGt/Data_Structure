#include <iostream>
#include <string>

using namespace std;

int main(){
    cout << "Starting program" << endl;
    int opt;
    string name="";
    
    //Create bidimensional dinamic array

    cout << "Create array" << endl;
    cout << "Columns: ";
    int cols;
    cin >> cols;
    cout << "Rows: ";
    int rows;
    cin >> rows;
    int **array = new int*[rows];
    

    do
    {
        cout << "-------MAIN MENU--------" << endl;
        cout << "1. Get Name" << endl; // Read a full name (getline) and create a int bidimensional dinamic array
        cout << "2. Add elements" << endl; // Add elements to the matrix
        cout << "3. Show matrix" << endl; // Print the matrix
        cout << "4. Sort lines of matrix" << endl;
        cout << "0. Exit" << endl;
        cout << "-------------------------" << endl;
        cout << "Option: ";
        cin >> opt;

        switch (opt)
        {
        case 1:
            getline(cin, name);
            break;
        case 2:
            
            
            break;
        case 3:
            cout << name << "your Matrix is:" << endl;

            
            break;
        case 4:
            
            break;
        default:
            cout << "Invalid option. Please try again" << endl;
            break;
        }
    } while (opt!=0);
    return 0;
}
