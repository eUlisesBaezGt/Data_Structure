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

void Stack::push(Employee x)
{
    Node *temp = new Node;
    temp->data = x;
    temp->next = top;
    top = temp;
}

Employee Stack::pop()
{
    if (top == NULL)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        Node *temp = top;
        top = top->next;
        Employee x = temp->data;
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
        cout << "ID\tName\tSalary" << endl;
        cout << temp->data.ID << "\t" << temp->data.Name << "\t" << temp->data.Salary << endl;
        temp = temp->next;
    }
    cout << endl;
}
