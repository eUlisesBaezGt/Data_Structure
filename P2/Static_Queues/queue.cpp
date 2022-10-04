#include "queue.h"

Queue::Queue()
{
    this->top = -1;
    this->head = 0;
    this->tail = 0;
}

Queue::~Queue() = default;

void Queue::enqueue(int value)
{
    if (this->top == 99)
    {
        cout << "Queue is full" << endl;
        return;
    }
    this->top++;
    this->data[this->top] = value;
}

int Queue::dequeue()
{
    if (this->top == -1)
    {
        cout << "Queue is empty" << endl;
        return -1;
    }
    int value = this->data[this->head];
    this->head++;
    this->top--;
    return value;
}

int Queue::front()
{
    if (this->top == -1)
    {
        cout << "Queue is empty" << endl;
        return -1;
    }
    cout << "Front: " << this->data[this->head] << endl;
    return this->data[this->head];
}

int Queue::size()
{
    cout << "SIZE:" << this->top + 1 << endl;
    return this->top + 1;
}

bool Queue::empty()
{
    if (this->top == -1)
    {
        cout << "Queue is empty" << endl;
        return true;
    }
    cout << "Queue is not empty" << endl;

    return this->top == -1;
}

void Queue::print()
{
    if (this->top == -1)
    {
        cout << "Queue is empty" << endl;
        return;
    }
    for (int i = this->head; i <= this->top; i++)
    {
        cout << this->data[i] << " ";
    }
    cout << endl;
}
