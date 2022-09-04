// Created by eubgt on 9/3/22.

#ifndef T3_POINTERS_REGARRWARRS_FACTORY_H
#define T3_POINTERS_REGARRWARRS_FACTORY_H


#include <iostream>
#include <string>

using namespace std;

struct Employee {
    string name;
    int lab_age;
    int pieces[3];
};

class Factory {
public:
    Factory();

    ~Factory();

    void Show();

    void Sort();

    void Register();

private:
    Employee *employees;
    int size{};
};


#endif //T3_POINTERS_REGARRWARRS_FACTORY_H
