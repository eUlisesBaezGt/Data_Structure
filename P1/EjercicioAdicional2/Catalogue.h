// Created by eubgt on 8/24/22.

#ifndef EJERCICIOADICIONAL2_CATALOGUE_H
#define EJERCICIOADICIONAL2_CATALOGUE_H

#include <iostream>
#include <string>

#define SIZE 100

using namespace std;

struct Residence {
    string street;
    int num;
    string pc;
};

struct Supplier {
    string name;
    Residence residence;
};

class Catalogue {
public:
    Supplier list[SIZE];

    void show_all();

    void show(const Supplier&);

    void search();

    void add();
};

#endif //EJERCICIOADICIONAL2_CATALOGUE_H
