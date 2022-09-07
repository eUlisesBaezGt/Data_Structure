#include "stack.h"


int main() {
//    Programar con C++ y Orientación a Objetos la aplicación que maneje DOS pilas de enteros,
//    en su implementación estática, la pila “original” y la pila “depurada”.

//    En la pila “original” podrás ir insertando (push) y extrayendo (pop) enteros, a solicitud del usuario.

//    Cuando el usuario elija la opción “depurar”, debes solicitarle un entero “menor” y traspalear los enteros de la
//    pila “original” (operación pop) a la pila “depurada” (operación push), descartando los enteros menores a “menor”.

//    En todo momento, habrá opción de mostrar ambas pilas.

    int choice;
    stack original;
    stack debugged;

    cout << "Starting" << endl;

    do {
        cout << endl;
        cout << "MAIN MENU" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Debug" << endl;
        cout << "4. Show both stacks" << endl;
        cout << "0. Exit" << endl;

        cout << "Choice: ";
        cin >> choice;
        cout << endl;

        switch (choice) {
            case 1:
                cout << "Pushing..." << endl;
                cout << "Enter a number: ";
                int number;
                cin >> number;
                original.push(number);
                break;

            case 2:
                cout << "Popping..." << endl;
                original.pop();
                break;

            case 3:
                cout << "Debugging..." << endl;
                cout << "Enter a number: ";
                int limit;
                cin >> limit;
                while (!original.isEmpty()) {
                    int popped = original.pop();
                    if (popped > limit) debugged.push(popped);
                }
                cout << "Debugged!" << endl;
                break;

            case 4:
                cout << "Showing..." << endl;
                cout << "Original stack: " << endl;
                original.show();
                cout << "Debugged stack: " << endl;
                debugged.show();
                cout << "Showed!" << endl;
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
