#include <iostream>
#include "lista.h"

using namespace std;

list::list()
{
	head_ = tail_ = temp_ = nullptr;
}

list::~list() = default;

void list::insert_at_end(const string& value)
{
	temp_ = new node;
	temp_->data = value;
	temp_->next = head_;

	if (head_ == nullptr)
	{
		head_ = tail_ = temp_;
	}
	else
	{
		tail_->next = temp_;
		tail_ = temp_;
		tail_->next = nullptr;
	}
}

void list::delete_element(const string& value)
{
	if (is_empty())
	{
		cout << "List is empty" << endl;
		return;
	}
	if (head_->data == value)
	{
		temp_ = head_;
		head_ = head_->next;
		tail_->next = nullptr;
		delete temp_;
		return;
	}
	if (tail_->data == value)
	{
		temp_ = head_;
		while (temp_->next != tail_)
		{
			temp_ = temp_->next;
		}
		temp_->next = nullptr;
		delete tail_;
		tail_ = temp_;
		return;
	}
	temp_ = head_;
	while (temp_->data != value)
	{
		temp_ = temp_->next;
	}
	node* temp2 = head_;
	while (temp2->next != temp_)
	{
		temp2 = temp2->next;
	}
	temp2->next = temp_->next;
	delete temp_;
}

string list::extract_head()
{
	if (is_empty()) cout << "List is empty" << endl;

	temp_ = head_;
	const string deleted = temp_->data;

	if (head_ == tail_)
	{
		head_ = tail_ = nullptr;
	}
	else
	{
		head_ = head_->next;
		tail_->next = nullptr;
	}
	return deleted;
}

void list::show_full()
{
	if (is_empty())
	{
		cout << "List is empty" << endl;
		return;
	}
	temp_ = head_;
	while (temp_->next != nullptr)
	{
		cout << temp_->data << endl;
		temp_ = temp_->next;
	}
	cout << temp_->data << endl;
}


bool list::is_empty() const
{
	return head_ == nullptr;
}
