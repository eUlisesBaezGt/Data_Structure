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
	void show_parameters();

private:
	string data[100];
	string head;
	int min, max, top;
};
