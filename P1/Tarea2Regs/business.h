// Created by eubgt on 8/23/22.

#ifndef TAREA2REGS_EMPRESA_H
#define TAREA2REGS_EMPRESA_H

#include <iostream>
#include <string>
#define MAX 100

using namespace std;

struct employee {  // Empleados de una empresa, conteniendo para cada uno, nombre, estatura en centimetros y sueldo semanal.
    string name;
    double height;
    double payment;
};

class business {
public:
    employee team[MAX];

    void show(employee [MAX]); // Mostrar el arreglo.
    void sort(employee (&) [MAX], int); // ordenar alfabéticamente el arreglo de la A a la Z, por el método de la burbuja
    void insert(employee (&) [MAX]); // ofrecer las opciones insertar y borrar, con base en el nombre
    void deletee(employee (&) [MAX]);
};

#endif //TAREA2REGS_EMPRESA_H

