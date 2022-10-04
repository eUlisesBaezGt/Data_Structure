//Mediante C++ y orientaci�n a objetos, elabora un programa que construya una
//pila con los datos de los colchones almacenados en la bodega de �Almacenes Grand�.
//Para cada colch�n debe contener su marca y el tama�o(King size, Matrimonial, Individual, etc.)
// La informaci�n la proporcionar� el usuario.

//La aplicaci�n debe incluir las siguientes opciones :
//a)       Opci�n para mostrar toda la informaci�n de la pila, indicando la informaci�n que se encuentra en el tope.
//b)       Posibilidad de insertar(push) nuevos colchones en la pila
//c)       Posibilidad de extraer(pop) colchones de la pila.


#include "stack.h"

int main() {
    stack s;
	cout << "Initial check" << endl;
    s.is_empty();

    int choice;

    do {
	    mattress e;
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
            cout << "PUSHING" << endl;
            cout << "Brand: ";
			cin >> e.brand;
			cout << "Size: ";
            cin >> e.size;
            s.push(e);
            break;
        case 2:
            cout << "POPPING" << endl;
            s.pop();
            break;
        case 3:
            cout << "SHOWING" << endl;
            s.print();
            cout << endl << "TOP: " << endl;
            s.top_data();
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
