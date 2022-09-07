// Created by eubgt on 9/6/22.

#ifndef T4_STATICINTSTACK_STACK_H
#define T4_STATICINTSTACK_STACK_H


#include <iostream>

#define size 4

using namespace std;

class stack {
public:
    stack();

    ~stack();

    void push(string);

    string pop();

    string top();

    void show();

    bool isEmpty();

private:
    int min, max, count;
    string *content;
};


#endif //T4_STATICINTSTACK_STACK_H
