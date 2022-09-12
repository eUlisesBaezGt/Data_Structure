#include "stack.h"

Stack::Stack()
{
    top = NULL;
}

Stack::~Stack()
{
    while (top != NULL)
    {
        Node *temp = top;
        top = top->next;
        delete temp;
    }
}

void Stack::push(int x)
{
    Node *temp = new Node;
    temp->data = x;
    temp->next = top;
    top = temp;
}

int Stack::pop()
{
    if (top == NULL)
    {
        cout << "Stack is empty" << endl;
        return -1;
    }
    else
    {
        Node *temp = top;
        top = top->next;
        int x = temp->data;
        delete temp;
        return x;
    }
}

bool Stack::isEmpty()
{
    return top == NULL;
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

int Stack::topData()
{
    if (top == NULL)
    {
        cout << "Stack is empty" << endl;
        return -1;
    }
    else
    {
        return top->data;
    }
}
