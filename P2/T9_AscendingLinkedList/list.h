#pragma once

class list
{
public:
	list();
	~list();

	void insert(int);
	int extract(int);
	void print() const;


private:
	struct node
	{
		int data{};
		node* next{};
	};

	node* head_;
};
