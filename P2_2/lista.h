#pragma once

#pragma once
#include <string>

class list
{
public:
	list();
	~list();

	void insert_at_end(const std::string&);
	void delete_element(const std::string&);

	std::string extract_head();

	void show_full();

	bool is_empty() const;

private:
	struct node
	{
		std::string data{};
		node* next{};
	};

	node *head_, *tail_, *temp_;
};
