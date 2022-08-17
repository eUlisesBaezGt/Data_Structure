// Created by eubgt on 8/16/22.

#include <iostream>
#include "Program.h"
#define n 10
using namespace std;

Program::Program() = default;

void Program::insert() {
    //a) Declara un arreglo de enteros    //b) Inicialízalo, parcialmente, en orden
    int numbers[n] = {1, 2, 3, 4, 6, 7, 8, 9, 10};
    //c) Declara una variable entera que contenga el número de elementos ocupados en el arreglo
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int occupied = n-1;

    // Imprime el arreglo inicial
    cout << "Original array: ";
    for (int k = 0; k <occupied; ++k) {
        cout << numbers[k] << " ";
    }
    cout << endl;

    while(true){
        //d) Pide el valor a insertar
        int value;
        cout << "Enter a value to insert: "; //5
        cin >> value;
        //e) Verifica que haya capacidad en el arreglo
        if (occupied == n) {
            cout << "Array is full" << endl;
            cout << "Insertion failed" << endl;
            break;
        } else { //f) Construye el algoritmo que inserta
            //f.1) Localiza posición para insertar
            int i = 0;
            while (i < size && value > numbers[i]) {
                i++;
            }
            //f.2) Desplaza
            for (int j = size; j > i; j--) {
                numbers[j] = numbers[j - 1];
            }
            //f.3) Coloca el nuevo elemento
            numbers[i] = value;
            //f.4) Incrementar la variable que indica los elementos ocupados
            occupied++;
            // g) Imprime el arreglo después de la inserción
            cout << "Array after insertion: ";
            for (int j = 0; j <occupied; ++j) {
                cout << numbers[j] << " ";
            }
            cout << endl;
        }
    }
}



