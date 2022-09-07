// Created by eubgt on 9/6/22.

#include "stack.h"

stack::stack() {
    this->min = 0;
    this->max = size - 1;
    this->count = min - 1;
    content = new int[size];
    for (int i = 0; i < size; i++) *(content + i) = 0;
}

stack::~stack() { delete[] content; }

void stack::push(int n) {
    if (this->count >= this->max) cout << "Stack is full" << endl;
    else {
        count++;
        *(content + this->count) = n;
        cout << "Pushed!" << endl;
    }
}

int stack::pop() {
    int popped = -1;
    if (this->count < this->min) cout << "Stack is empty" << endl;
    else {
        popped = *(content + this->count);
        count--;
        cout << "Popped!" << endl;
    }
    return popped;
}

void stack::show() {
    cout << "Stack content: ";
    if (this->count < this->min) cout << "Stack is empty" << endl;
    else {
        for (int i = 0; i <= this->count; i++) cout << *(content + i) << " ";
        cout << endl;
    }
    cout << endl;
}

bool stack::isEmpty() {
    if (this->count < this->min) return true;
    else return false;
}
