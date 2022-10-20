#pragma once
#include <string>

struct motorcycle
{
	motorcycle();
	std::string plate;
	int cylinders;
};

struct node
{
	motorcycle data;
	node* next;
};

class list
{
public:
	list();

	void show_all_list();
	void insert_at_end(motorcycle);
	std::string extract(std::string);

private:
	node *head_, *tail_;
};
