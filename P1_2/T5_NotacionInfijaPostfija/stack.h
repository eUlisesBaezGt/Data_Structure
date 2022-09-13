#include <iostream>

using namespace std;

class Stack {
public:
    Stack();

    ~Stack();

    void push(int);

    int pop();

    bool isEmpty();

    int topData();

private:
    struct Node {
        int data;
        Node *next;
    };
    Node *top;
};
