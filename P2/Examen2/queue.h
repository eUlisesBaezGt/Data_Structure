#pragma once
#include <iostream>

struct motorcycle
{
	motorcycle(const std::string& plate, const int cylinders)
	{
		this->plate = plate;
		this->cylinders = cylinders;
	}

	motorcycle() = default;
	std::string plate;
	int cylinders{};
};

struct node
{
	motorcycle data;
	node* next{};
};


class queue
{
public:
	queue();
	~queue();

	void add_motorcycle_to_queue(motorcycle);
	motorcycle pay_motorcycle();
	void show() const;
	int size() const;
	void show_head() const;
	void show_tail() const;
	bool is_empty() const;

private:
	node* head_;
	node* tail_;
};
