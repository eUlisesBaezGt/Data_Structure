#include <iostream>

using namespace std;

class Stack
{
public:
    Stack();
    ~Stack();
    void push(char);
    char pop();
    bool isEmpty();

private:
    struct Node
    {
        char data;
        Node *next;
    };
    Node *top;
};
