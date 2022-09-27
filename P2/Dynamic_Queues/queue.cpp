#include "queue.h"

queue::queue()
{
    head = nullptr;
    tail = nullptr;
}

queue::~queue()
{
    const Node* current = head;
    while (current != nullptr)
    {
        const Node* next = current->next;
        delete current;
        current = next;
    }
}

void queue::enqueue(string data)
{
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;
    if (head == nullptr)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

string queue::dequeue()
{
    if (head == nullptr)
    {
        return "";
    }
    else
    {
        const Node* temp = head;
        head = head->next;
        string data = temp->data;
        delete temp;
        return data;
    }
}

void queue::print() const
{
    Node* current = head;
    while (current != nullptr)
    {
        cout << current->data << endl;
        current = current->next;
    }
}

int queue::size() const
{
    int size = 0;
    Node* current = head;
    while (current != nullptr)
    {
        size++;
        current = current->next;
    }
    return size;
}

void queue::show_head() const
{
    cout << head->data << endl;
}

void queue::show_tail() const
{
    cout << tail->data << endl;
}

void queue::is_empty() const
{
    if (head == nullptr)
    {
        cout << "Empty" << endl;
    }
    else
    {
        cout << "Not empty" << endl;
    }
}
