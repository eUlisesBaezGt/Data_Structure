#pragma once

class LinkedList
{
public:
	LinkedList();
	~LinkedList();

	void insert(int);
	void print() const;
	int extract_head();

	bool is_empty() const;
	int size() const;

private:
	struct node
	{
		int data{};
		node* next{};
	};

	node *head_{}, *tail_{};
};
