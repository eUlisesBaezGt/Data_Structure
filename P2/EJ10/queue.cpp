#include "queue.h"

Queue::Queue()
{
    this->top = -1;
    this->max = 99;
    this->min = 0;
    this->head = "";
}

Queue::~Queue() = default;

void Queue::enqueue(string value)
{
    if (this->top == 99)
    {
        cout << "Queue is full" << endl;
        return;
    }
    this->top++;
    this->data[this->top] = value;
}

string Queue::dequeue()
{
    if (this->top == -1)
    {
        cout << "Queue is empty" << endl;
        return "";
    }
    this->top--;
    return this->data[0];
}

void Queue::print()
{
    if (this->top == -1)
    {
        cout << "Queue is empty" << endl;
        return;
    }
    for (int i = 0; i <= this->top; i++)
    {
        cout << this->data[i] << endl;
    }
    cout << endl;
}

void Queue::show_parameters()
{
    cout << "TOP: " << this->top << endl;
    cout << "MAX: " << this->max << endl;
}
