#include "stack.h"

int main() {
    setlocale(LC_ALL, "");
    // Programa paa convertir una expresión infija a postfija
    // Leer notación infija
    string infija;
    cout << "Ingrese la expresión infija: ";
    getline(cin, infija);

    // Crear una pila
    Stack pila;

    // Crear una cadena para la expresión postfija
    string postfija;

    // Recorrer la expresión infija
    for (char i: infija) {
        // Si el carácter es una variable o un número, concatenarlo a postfija
        if (i >= 'a' && i <= 'z' || i >= '0' && i <= '9') {
            postfija += i;
        }
            // Si el carácter es un operador, de mayor precedencia que el del tope, se inserta
        else if (i == '+' || i == '-') {
            if (pila.isEmpty() || pila.topData() == '(') {
                pila.push(i);
            } else {
                while (!pila.isEmpty() && pila.topData() != '(') {
                    postfija += pila.pop();
                }
                pila.push(i);
            }
        } else if (i == '*' || i == '/') {
            if (pila.isEmpty() || pila.topData() == '(' || pila.topData() == '+' || pila.topData() == '-') {
                pila.push(i);
            } else {
                while (!pila.isEmpty() && pila.topData() != '(' && pila.topData() != '+' && pila.topData() != '-') {
                    postfija += pila.pop();
                }
                pila.push(i);
            }
        }

            // Si el carácter es un paréntesis izquierdo, se inserta en la pila con precedencia 0
        else if (i == '(') {
            pila.push(i);
        }
            // Si el carácter es un paréntesis derecho, se sacan todos los operadores de la pila hasta encontrar un paréntesis izquierdo
        else if (i == ')') {
            while (pila.topData() != '(') {
                postfija += pila.pop();
            }
            pila.pop();
        }
    }
    // Al finalizar, se sacan todos los operadores de la pila y se insertan a postfija
    while (!pila.isEmpty()) {
        postfija += pila.pop();
    }
    // Imprimir la expresión postfija
    cout << "La expresión postfija es: " << postfija << endl;

    return 0;
}
