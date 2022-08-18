#include <iostream>

using namespace std;

// Escribir el código del un algoritmo que registre las sucursales de una cadena de tiendas.
// Que registre el número de sucursal, el nombre del gerente y el importe de ventas de los últimos 2 meses. (arreglos)
// Que los ordene en forma ascendente del acuerdo al número de sucursal, empleando el método de la burbuja.

struct Branch {
    int id{};
    string manager;
    double sales[2]{};
};

void AskData(Branch offices[], int num) {
    for (int i = 0; i < num; i++) {
        cout << "Branch " << i + 1 << ": " << endl;
        cout << "Number: ";
        cin >> offices[i].id;
        cout << "Manager: ";
        cin >> offices[i].manager;
        for (int j = 0; j < 2; j++) {
            cout << "Sales " << j + 1 << ": ";
            cin >> offices[i].sales[j];
        }
        cout << endl;
    }
    cout << "---------------------" << endl;
    cout << endl;
}

void OrderID(Branch offices[], int num) {
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num - 1; j++) {
            if (offices[j].id > offices[j + 1].id) {
                Branch temp = offices[j];
                offices[j] = offices[j + 1];
                offices[j + 1] = temp;
            }
        }
    }
}

void ShowData(Branch offices[], int num) {
    for (int i = 0; i < num; i++) {
        cout << "Branch " << i + 1 << ": " << endl;
        cout << "Number: " << offices[i].id << endl;
        cout << "Manager: " << offices[i].manager << endl;
        cout << "Sales: |";
        for (int j = 0; j < num; j++) {
            cout << offices[i].sales[j] << "|";
        }
        cout << endl;
        cout << "---------------------" << endl;
    }
    cout << endl;
}

int main() {
    cout << "# Branch Office: ";
    int num;
    cin >> num;
    Branch offices[num];
    AskData(offices, num);
    OrderID(offices, num);
    ShowData(offices, num);
    return 0;
}
