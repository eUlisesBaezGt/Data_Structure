#include <iostream>

using namespace std;

struct Employee {
    string ID;
    string Name;
    float Salary;
};

class Stack {
public:
    Stack();

    ~Stack();

    void push(Employee);

    Employee pop();

    bool isEmpty();

    void print();

private:
    struct Node {
        Employee data;
        Node *next{};
    };
    Node *top;
};
