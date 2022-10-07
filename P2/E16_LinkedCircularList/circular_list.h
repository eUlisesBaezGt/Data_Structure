#pragma once

class circular_list
{
public:
	circular_list();
	~circular_list() = default;

	void insert_at_end(int);
	void print();
	bool search(int);
	int size();
	static void exists(bool);

private:
	struct node
	{
		int data{};
		node* next{};
	};

	node *head_, *tail_, *temp_;
};
