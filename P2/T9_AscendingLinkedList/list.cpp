#include "list.h"
#include <iostream>

using namespace std;

list::list()
{
	head_ = nullptr;
}

list::~list() = default;

void list::insert(const int x)
{
	const auto new_node = new node;
	new_node->data = x;
	new_node->next = nullptr;

	if (head_ == nullptr)
	{
		head_ = new_node;
	}
	else
	{
		node* current = head_;
		node* previous = nullptr;

		while (current != nullptr && current->data < x)
		{
			previous = current;
			current = current->next;
		}

		if (previous == nullptr)
		{
			new_node->next = head_;
			head_ = new_node;
		}
		else
		{
			previous->next = new_node;
			new_node->next = current;
		}
	}
}

int list::extract(const int x)
{
	node* current = head_;
	node* previous = nullptr;

	while (current != nullptr && current->data != x)
	{
		previous = current;
		current = current->next;
	}

	if (current == nullptr)
	{
		cout << "Element not found" << endl;
		return -1;
	}
	if (previous == nullptr)
	{
		head_ = head_->next;
	}
	else
	{
		previous->next = current->next;
	}

	delete current;
	return x;
}

void list::print() const
{
	const node* temp = head_;
	while (temp != nullptr)
	{
		cout << temp->data << "\t";
		temp = temp->next;
	}
	cout << endl;
}
