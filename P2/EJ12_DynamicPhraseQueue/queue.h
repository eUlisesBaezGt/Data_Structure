#pragma once
#include <iostream>

using namespace std;

struct Node
{
    string data;
    Node *next;
};

class queue
{
public:
    queue();
    ~queue();
    void enqueue(string);
    string dequeue();
    void print() const;
    int size() const;
    void show_head() const;
    void show_tail() const;
    void is_empty() const;

private:
    Node *head;
    Node *tail;
};
