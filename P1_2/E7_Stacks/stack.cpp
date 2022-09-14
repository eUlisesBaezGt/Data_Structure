#include "stack.h"

#include <utility>

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

void Stack::push(Employee x) {
    Node *temp = new Node;
    temp->data = std::move(x);
    temp->next = top;
    top = temp;
    cout << "Hired" << endl;
}

Employee Stack::pop() {
    if (top == nullptr) {
        cout << "Stack is empty" << endl;
    } else {
        Node *temp = top;
        top = top->next;
        Employee x = temp->data;
        delete temp;
        cout << "Fired " << x.Name << endl;
        return x;
    }
}

bool Stack::isEmpty() {
    if (top == nullptr) {
        cout << "Stack is empty" << endl;
        return true;
    } else {
        cout << "Stack is not empty" << endl;
        return false;
    }
}

void Stack::print() {
    if (this->isEmpty()) {
        return;
    } else {
        Node *temp = top;
        cout << "ID\t|Name\t|Salary" << endl;
        while (temp != nullptr) {
            cout << temp->data.ID << "\t|" << temp->data.Name << "\t|" << temp->data.Salary << endl;
            temp = temp->next;
        }
        cout << endl;
    }
}
