#pragma once

#include <iostream>
#include <string>

using namespace std;

class DoubleLinkedWorldList
{
public:
	DoubleLinkedWorldList();
	~DoubleLinkedWorldList();

	void insert_at_head(const string&);
	void insert_at_end(const string&);
	void insert_at_any_position(const string&, const string&);

	void delete_head();
	void delete_tail();
	void delete_element(const string&);

	bool is_empty() const;
	int size();

	void show_head_to_tail();
	void show_tail_to_head();

private:
	struct node
	{
		string data{};
		node* next{};
		node* prev{};
	};

	node *head_, *tail_, *temp_{};
};
