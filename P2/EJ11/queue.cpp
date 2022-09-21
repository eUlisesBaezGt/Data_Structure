#include "queue.h"

Queue::Queue()
{
    this->top = -1;
    this->max = 6;
    this->min = 0;
    this->head = "";
    for (int i = 0; i < this->max; i++)
    {
        this->data[i] = "";
    }
}

Queue::~Queue() = default;

void Queue::enqueue(string value)
{
    if (this->top == 6)
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
    this->head = this->data[0];
    for (int i = 0; i < this->top; i++)
    {
        this->data[i] = this->data[i + 1];
    }
    this->top--;
    return this->head;
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

int Queue::size()
{
    return this->top + 1;
}
