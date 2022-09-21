#include <iostream>

using namespace std;

class Queue
{
public:
	Queue();
	~Queue();
	void enqueue(string);
	string dequeue();
	void print();
	int size();

private:
	string data[6];
	string head;
	int min, max, top;
};
