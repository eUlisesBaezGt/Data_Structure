#include "LinkedList.h"

#include <iostream>

using namespace std;

LinkedList::LinkedList()
{
	head_ = nullptr;
}

LinkedList::~LinkedList() = default;

void LinkedList::insert(const int x)
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

void LinkedList::print() const
{
	if (is_empty()) cout << "List is empty" << endl;
	else
	{
		const node* current = head_;
		while (current != nullptr)
		{
			cout << current->data << " ";
			current = current->next;
		}
		cout << endl;
	}
}

int LinkedList::extract_head()
{
	if (is_empty()) return -1;
	const auto temp = head_;
	head_ = head_->next;
	const auto x = temp->data;
	delete temp;
	return x;
}

bool LinkedList::is_empty() const
{
	return head_ == nullptr;
}

int LinkedList::size() const
{
	if (is_empty())
	{
		return 0;
	}
	int count = 1;
	const node* temp = head_;
	while (temp != tail_)
	{
		count++;
		temp = temp->next;
	}
	return count;
}
