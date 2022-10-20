#include <iostream>;
#include "list.h"
using namespace std;

list::list()
{
	head_ = tail_ = nullptr;
}

void list::show_all_list()
{
	if (!head_)
	{
		cout << "List is empty" << endl;
		return;
	}
	node* temp = head_;
	cout << "PLATE\t" << "CYLINDERS" << endl;
	while (temp != tail_)
	{
		cout << temp->data.plate << "\t" << temp->data.cylinders << endl;
		temp = temp->next;
	}
	cout << temp->data.plate << "\t" << temp->data.cylinders << endl;
}

void list::insert_at_end(motorcycle m)
{
	auto temp = new node;
	temp->data = m;
	if (!head_)
	{
		head_ = tail_ = temp;
		temp->next = nullptr;
		return;
	}
	tail_->next = temp;
	tail_ = temp;
	tail_->next = head_;
}

std::string list::extract(std::string pla)
{
	if (!head_)
	{
		cout << "List is empty" << endl;
		return "";
	}
	node* temp = head_;
	node* prev = nullptr;
	while (temp != tail_)
	{
		if (temp->data.plate == pla)
		{
			if (temp == head_)
			{
				head_ = head_->next;
				tail_->next = head_;
				delete temp;
				return pla;
			}
			if (temp == tail_)
			{
				tail_ = prev;
				tail_->next = head_;
				delete temp;
				return pla;
			}
			prev->next = temp->next;
			delete temp;
			return pla;
		}
		prev = temp;
		temp = temp->next;
	}
	if (temp->data.plate == pla)
	{
		if (temp == head_)
		{
			head_ = head_->next;
			tail_->next = head_;
			delete temp;
			return pla;
		}
		if (temp == tail_)
		{
			tail_ = prev;
			tail_->next = head_;
			delete temp;
			return pla;
		}
		prev->next = temp->next;
		delete temp;
		return pla;
	}
	return "";
}
