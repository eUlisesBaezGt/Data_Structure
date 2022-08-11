// Created by eubgt on 8/11/22.

#include "Enteros.h"
#include <iostream>

using namespace std;

Enteros::Enteros() {}

void Enteros::Sumar(int &cuantos, int &suma) {
    int num;
    cuantos = 0, suma = 0;
    do {
        cout << "Ingrese un número: ";
        cin >> num;
        if (num != 0) {
            suma += num;
            cuantos++;
        }
    } while (num != 0);
}
