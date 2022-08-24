// Created by eubgt on 8/24/22.

#ifndef EJERCICIOADICIONAL_LIST_H
#define EJERCICIOADICIONAL_LIST_H

#include <iostream>

using namespace std;

#define SIZE 5

class List {
public:
    float nums[SIZE];
    void show();
    void sort();
    void add(List, List);
};

#endif //EJERCICIOADICIONAL_LIST_H
