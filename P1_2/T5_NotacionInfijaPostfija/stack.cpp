#include "stack.h"

Stack::Stack() {
    top = nullptr;
}

Stack::~Stack() {
    while (top != nullptr) {
        Node *temp = top;
        top = top->next;
        delete temp;
    }
}

void Stack::push(int x) {
    Node *temp = new Node;
    temp->data = x;
    temp->next = top;
    top = temp;
}

int Stack::pop() {
    if (top == nullptr) {
        cout << "Stack is empty" << endl;
        return -1;
    } else {
        Node *temp = top;
        top = top->next;
        int x = temp->data;
        delete temp;
        return x;
    }
}

bool Stack::isEmpty() {
    return top == nullptr;
}

int Stack::topData() {
    if (top == nullptr) {
        cout << "Stack is empty" << endl;
        return -1;
    } else {
        return top->data;
    }
}
