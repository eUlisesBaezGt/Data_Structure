|#include "CircularLinkedList.h"
#include <iostream>

circular_linked_list::circular_linked_list()
{
	head_ = tail_ = nullptr;
}

circular_linked_list::~circular_linked_list()
{
	if (head_ == nullptr)
		return;

	const node* current = head_;

	while (current != tail_)
	{
		const node* next = current->next;
		delete current;
		current = next;
	}

	delete tail_;
}

void circular_linked_list::show_all_list() const
{
	if (is_empty())
	{
		cout << "List is empty" << endl;
		return;
	}
	const node* temp = head_;
	cout << "List: ";
	while (temp != tail_)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << temp->data << endl;
}

void circular_linked_list::insert_at_any_position(const string& value, const string& before)
{
	const auto temp = new node;
	temp->data = value;
	if (is_empty())
	{
		head_ = tail_ = temp;
		temp->next = head_;
		return;
	}
	if (before == head_->data)
	{
		temp->next = head_;
		head_ = temp;
		tail_->next = head_;
		return;
	}
	node* temp2 = head_;
	while (temp2->next != head_ && temp2->next->data != before)
	{
		temp2 = temp2->next;
	}
	if (temp2->next == head_)
	{
		temp->next = head_;
		tail_ = temp;
		temp2->next = temp;
	}
	else
	{
		temp->next = temp2->next;
		temp2->next = temp;
	}
}

void circular_linked_list::delete_odd_nodes()
{
	// CASE IF ONLY ONE NODE
	if (head_ == tail_)
	{
		cout << "Deleted: " << head_->data << endl;
		delete head_;
		head_ = tail_ = nullptr;
		// cout << "Deleted LAST NODE" << endl;
		return;
	}

	// DELETE HEAD NODE
	cout << "Deleted: " << head_->data << endl;
	const node* temp = head_;
	head_ = head_->next;
	tail_->next = head_;
	delete temp;
	//cout << "Deleted HEAD NODE" << endl;

	// DELETE ALL OTHER ODD NODES
	node* current = head_;
	while (current->next != head_)
	{
		if (current->next->next == head_)
		{
			cout << "Deleted: " << tail_->data << endl;
			delete current->next;
			current->next = head_;
			tail_ = current;
			// cout << "Deleted LAST NODE" << endl;
			return;
		}
		const node* temp1 = current->next;
		cout << "Deleted: " << current->next->data << endl;
		current->next = current->next->next;
		delete temp1;
		// cout << "Deleted ODD NODE" << endl;
		current = current->next;
	}
}

void circular_linked_list::odd_cycle()
{
	// DELETE ALL ODD NUMBERS UNTIL LIST IS EMPTY
	while (!is_empty())
	{
		delete_odd_nodes();
	}
}

bool circular_linked_list::is_empty() const
{
	return head_ == nullptr;
}

int circular_linked_list::size() const
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
