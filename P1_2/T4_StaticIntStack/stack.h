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

    void push(int);

    int pop();

    void show();

    bool isEmpty();

private:
    int min, max, count;
    int *content;
};


#endif //T4_STATICINTSTACK_STACK_H
