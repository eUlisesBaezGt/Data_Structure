#include "stack.h"

Stack::Stack()
{
    top = nullptr;
}

Stack::~Stack()
{
    while (top != nullptr)
    {
        Node *temp = top;
        top = top->next;
        delete temp;
    }
}

void Stack::push(char x)
{
    Node *temp = new Node;
    temp->data = x;
    temp->next = top;
    top = temp;
}

char Stack::pop()
{
    if (top == nullptr)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        Node *temp = top;
        top = top->next;
        char x = temp->data;
        delete temp;
        return x;
    }
}

bool Stack::isEmpty()
{
    return top == nullptr;
}

void Stack::print()
{
    Node *temp = top;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
