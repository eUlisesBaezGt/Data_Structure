#include <iostream>
#include "circular_list.h"

using namespace std;

circular_list::circular_list()
{
	head_ = tail_ = temp_ = nullptr;
}

void circular_list::insert_at_end(const int value)
{
	temp_ = new node;
	temp_->data = value;
	temp_->next = head_;

	if (head_ == nullptr)
	{
		head_ = tail_ = temp_;
		tail_->next = head_;
	}
	else
	{
		tail_->next = temp_;
		tail_ = temp_;
	}
}

void circular_list::print()
{
	if (head_ == nullptr)
	{
		return;
	}
	else
	{
		temp_ = head_;
		do
		{
			cout << temp_->data << " ";
			temp_ = temp_->next;
		}
		while (temp_ != head_);
		cout << endl;
	}
}

bool circular_list::search(const int value)
{
	if (head_ == nullptr)
	{
		cout << "List is empty" << endl;
		return false;
	}
	temp_ = head_;
	do
	{
		if (temp_->data == value)
		{
			return true;
		}
		temp_ = temp_->next;
	}
	while (temp_ != head_);
	return false;
}

int circular_list::size()
{
	int count = 0;
	if (head_ == nullptr)
	{
		return count;
	}
	temp_ = head_;
	do
	{
		count++;
		temp_ = temp_->next;
	}
	while (temp_ != head_);
	return count;
}

void circular_list::exists(const bool value)
{
	if (value)
	{
		cout << "Exists in list" << endl;
	}
	else
	{
		cout << "Does not exists in list" << endl;
	}
}
