#include "List.h"

#include <iostream>
#include <utility>

using namespace std;

list::list()
{
	head_ = nullptr;
}

list::~list() = default;

void list::insert_at_start(std::string x)
{
	const auto temp = new node;
	temp->data = std::move(x);
	temp->next = head_;
	head_ = temp;
}

void list::insert_at_position(string x, const int position)
{
	const auto temp = new node;
	temp->data = std::move(x);
	temp->next = nullptr;

	if (head_ == nullptr)
	{
		head_ = temp;
	}
	else
	{
		node* temp1 = head_;
		for (int i = 0; i < position - 1; i++)
		{
			temp1 = temp1->next;
		}
		temp->next = temp1->next;
		temp1->next = temp;
	}
}

void list::insert_at_end(std::string x)
{
	const auto temp = new node;
	temp->data = std::move(x);
	temp->next = nullptr;

	if (head_ == nullptr)
	{
		head_ = temp;
	}
	else
	{
		node* temp1 = head_;
		while (temp1->next != nullptr)
		{
			temp1 = temp1->next;
		}
		temp1->next = temp;
	}
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
