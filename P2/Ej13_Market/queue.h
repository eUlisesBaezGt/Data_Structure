#pragma once
#include <iostream>

using namespace std;

struct Node
{
	string data;
	Node* next;
};

class queue
{
public:
	queue();
	~queue();
	void enqueue(string);
	string dequeue();
	void print() const;
	bool isEmpty() const;
private:
	Node* head;
	Node* tail;
};
