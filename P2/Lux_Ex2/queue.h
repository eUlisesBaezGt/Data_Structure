#pragma once
#include <iostream>

struct motorcycle
{
	motorcycle(const std::string&, int);
	motorcycle() = default;
	std::string plate;
	int cylinders{};
};

inline motorcycle::motorcycle(const std::string& plate, const int cylinders)
{
	this->plate = plate;
	this->cylinders = cylinders;
}


struct node
{
	motorcycle data;
	node* next{};
};


class queue
{
public:
	queue();
	queue(const queue&);
	queue(queue&&) noexcept;
	queue& operator=(const queue&);
	queue& operator=(queue&& other) noexcept;
	~queue();

	void enqueue(motorcycle);
	motorcycle dequeue();
	void print() const;
	int size() const;
	void show_head() const;
	void show_tail() const;
	bool is_empty() const;

private:
	node* head_;
	node* tail_;
};
