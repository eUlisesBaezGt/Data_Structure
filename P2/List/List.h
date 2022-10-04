#pragma once
#include <string>


class list
{
public:
	list();
	~list();
	void insert_at_start(std::string);
	void insert_at_position(std::string, int);
	void insert_at_end(std::string);
	void print() const;
private:
	struct node
	{
		std::string data;
		node* next{};
	};

	node* head_;
};
