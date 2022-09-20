#include <iostream>

using namespace std;

class Queue
{
public:
	Queue();
	~Queue();
	void enqueue(int value);
	int dequeue();
	int front();
	int size();
	bool empty();
	void print();

private:
	// static implementation of queue
	int data[100];
	int head, tail, top;
};
