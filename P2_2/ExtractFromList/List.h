#pragma once
#include <string>


class list
{
public:
	list();
	~list();
	void insert_at_start(std::string);
	void insert_aside(std::string, std::string);
	void insert_at_end(std::string);
	void print() const;
	std::string extract_at_start();
	std::string extract(std::string);
	std::string extract_at_end();

private:
	struct node
	{
		std::string data;
		node* next{};
	};

	node* head_;
};
