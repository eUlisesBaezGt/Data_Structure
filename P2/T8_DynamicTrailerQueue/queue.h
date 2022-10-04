#pragma once
#include <iostream>

struct trailer
{
	std::string plate;
	std::string product;
};

struct node
{
	trailer data;
	node* next{};
};

class queue
{
public:
	queue();
	~queue();
	void enqueue(const trailer&);
	void dequeue();
	void print() const;
	int size() const;
	void show_head() const;
	void show_tail() const;
	bool is_empty() const;

private:
	node* head_;
	node* tail_;
};
