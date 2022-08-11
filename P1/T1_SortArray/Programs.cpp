// Created by eubgt on 8/11/22.

#include "Programs.h"
#include <iostream>

using namespace std;

Programs::Programs() = default;

//Parte 1
void Programs::First() {
    //a)Cree un arreglo de enteros y lo inicialice en desorden
    int a[10] = {2, 4, 3, 7, 1, 6, 5, 9, 8, 10};
    //b)     Muestre el arreglo original
    for (int i : a) cout << i << " ";
    cout << endl;
    //c)Ordene el arreglo por cualquier método (menor a mayor por burbuja) (excepto usando bibliotecas pre-programadas)
    for (int & i : a) {
        for (int & j : a) {
            if (i < j) {
                int temp = i;
                i = j;
                j = temp;
            }
        }
    }
    //d)Muestre el arreglo ordenado
    for (int i : a) cout << i << " ";
    cout << endl;
}

//Parte 2:
void Programs::Second() {
    //a)     Cree un arreglo de strings y lo inicialice en desorden
    string a[6] = {"hey", "world", "do", "Supercalifragilisticexpialidocious", "Kant", "i"};
    //b)     Muestre el arreglo original
    for (const string& i : a) cout << i << " ";
    cout << endl;
    //c)Ordene el arreglo por cualquier método (menor a mayor longitud con burbuja) (excepto usando bibliotecas pre-programadas)
    for (string & i : a) {
        for (string & j : a) {
            if (i.length() < j.length()) {
                string temp = i;
                i = j;
                j = temp;
            }
        }
    }
    //d)     Muestre el arreglo ordenado
    for (const string& i : a) cout << i << " ";
    cout << endl;
}
