#pragma once
#include <iostream>

using namespace std;

class stack
{
public:
	stack();
	~stack();
	void push(int);
	int pop();
	bool is_empty() const;
	void print() const;
	int top_data() const;

private:
	struct node
	{
		int data;
		node* next;
	};

	node* top_;
};
