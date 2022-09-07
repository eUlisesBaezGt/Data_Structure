#include "stack.h"

stack::stack()
{
    this->min = 0;
    this->max = size - 1;
    this->count = min - 1;
    content = new int[size];
    for (int i = 0; i < size; i++)
        *(content + i) = 0;
}

stack::~stack() = default;

void stack::push(int n)
{
    if (this->count >= this->max)
        return;

    *(content + this->count + 1) = n;
    this->count++;

    // count++;
    // *(content+this->count) = n;    // content[this->count]=n;

    return;
}

int stack::pop()
{
    int popped;
    if (this->count < this->min)
        return -1;

    popped = *(content + this->count); // popped = content[count];
    this->count--;
}

void stack::show()
{
    cout << "STACK" << endl;
    for (int i = max; i >= 0; i--)
    {
        cout << "\t" << content[i];
        if (i == min)
            cout << "\t ----> Min";
        if (i == max)
            cout << "\t ----> Max";
        if (i == count)
            cout << "\t ----> Count";
        cout << endl;
    }
    cout << endl;
}

int stack::top()
{
    if (this->count < this->min)
        return -1;

    return *(content + this->count);
}
