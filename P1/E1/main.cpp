#include <iostream>
#include "Enteros.h"

using namespace std;

int main() {
    Enteros misNumeros;
    int cuenta = 0, suma = 0;
    misNumeros.Sumar(cuenta, suma);
    cout << "Se leyeron " << cuenta << " numeros y la suma es " << suma << endl;
}

//// Recibir números enteros y sumar hasta llegar a 0. Informar números recibidos y suma total para.
//int numero, suma = 0, contador = 0;
//cout << "Ingrese un numero: "; cin >> numero;
//while (numero != 0) { suma += numero; contador ++;
//cout << "Ingrese un numero: "; cin >> numero; }
//cout << "Suma total: " << suma << endl;
//cout << "Numeros ingresados: " << contador << endl;
//cout << "Finalizado" << endl;
