// Created by eubgt on 8/11/22.

#include "Program.h"
#include <iostream>

using namespace std;

Program::Program() = default;

void Program::del() {
    //a) Declara un arreglo de enteros,
    // b)Inicialízalo ordenado
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    //c)Declara una variable entera que contenga el número de elementos ocupados en el arreglo
    int arrSize = sizeof(a)/sizeof(a[0]);
    int ocupados = arrSize;
    //d)Pide el valor a borrar
    int valor;
    cout << "Ingrese el valor a borrar: ";
    cin >> valor;
    //e)Construye el algoritmo que borra
    //e.1)Localizar posición a borrar
    int pos = -1;
    for (int i = 0; i < arrSize; i++) {
        if (a[i] == valor) {
            pos = i;
            break;
        }
    }
    //e.2)Desplazar
    for (int i = pos; i < arrSize - 1; i++) {
        a[i] = a[i + 1];
    }
    // e.3)Colocar cero al último elemento (elemento borrado)
    a[arrSize-1] = 0;
    //e.4)Actualizar el número de elementos ocupados
    ocupados--;
    //f)Imprime el arreglo
    for (int i = 0; i < arrSize; i++) {
        cout << a[i] << " ";
    }
}
