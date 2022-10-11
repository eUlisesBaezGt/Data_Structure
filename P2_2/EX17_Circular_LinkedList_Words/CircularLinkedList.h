#pragma once
#include <string>
#include <iostream>

using namespace std;

class CircularLinkedList
{
public:
	CircularLinkedList();
	~CircularLinkedList();

	void show_all_list() const;

	void insert_at_any_position(const string&, const string&);

	void delete_element(const string&);

	bool search_word(const string&);
	static void searched(bool);

	bool is_empty() const;
	int size() const;


private:
	struct node
	{
		string data{};
		node* next{};
	};

	node *head_, *tail_, *checked_;
};
