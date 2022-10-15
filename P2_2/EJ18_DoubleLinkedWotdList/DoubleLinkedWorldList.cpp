#include "DoubleLinkedWorldList.h"

DoubleLinkedWorldList::DoubleLinkedWorldList()
{
	head_ = tail_ = nullptr;
}

DoubleLinkedWorldList::~DoubleLinkedWorldList() = default;

void DoubleLinkedWorldList::insert_at_head(const string& value)
{
	temp_ = new node;
	temp_->data = value;
	temp_->next = head_;
	temp_->prev = nullptr;
	if (!is_empty())
		head_->prev = temp_;
	else
		tail_ = temp_;
	head_ = temp_;
}

void DoubleLinkedWorldList::insert_at_end(const string& value)
{
	if (is_empty())
	{
		insert_at_head(value);
		return;
	}
	temp_ = new node;
	temp_->data = value;
	temp_->next = nullptr;
	temp_->prev = tail_;
	tail_->next = temp_;
	tail_ = temp_;
}

void DoubleLinkedWorldList::insert_at_any_position(const string& value, const string& after)
{
	bool found = false;
	if (is_empty())
	{
		insert_at_head(value);
		return;
	}
	node* previous = head_;
	while (previous != nullptr)
	{
		if (previous->data == after)
		{
			found = true;
			break;
		}
		previous = previous->next;
	}
	if (!found)
	{
		cout << "Element not found" << endl;
		return;
	}

	if (previous == tail_)
	{
		insert_at_end(value);
		return;
	}
	temp_ = new node;
	temp_->data = value;
	temp_->next = previous->next;
	temp_->prev = previous;
	previous->next = temp_;
	temp_->next->prev = temp_;
}

void DoubleLinkedWorldList::delete_head()
{
	if (is_empty()) cout << "List is empty" << endl;

	temp_ = head_;
	const string deleted = temp_->data;

	head_ = head_->next;
	if (temp_ == tail_)
		tail_ = nullptr;
	else
		head_->prev = nullptr;

	cout << "Deleted: " << deleted << endl;
	delete temp_;
}

void DoubleLinkedWorldList::delete_tail()
{
	if (is_empty()) cout << "List is empty" << endl;

	temp_ = tail_;
	const string deleted = temp_->data;

	tail_ = tail_->prev;
	if (temp_ == head_)
		head_ = nullptr;
	else
		tail_->next = nullptr;

	cout << "Deleted: " << deleted << endl;
	delete temp_;
}

void DoubleLinkedWorldList::delete_element(const string& value)
{
	bool found = false;

	if (is_empty()) cout << "List is empty" << endl;

	temp_ = head_;
	while (temp_ != nullptr)
	{
		if (temp_->data == value)
		{
			found = true;
			break;
		}
		temp_ = temp_->next;
	}

	if (!found)
	{
		cout << "Element not found" << endl;
		return;
	}

	if (temp_ == head_)
	{
		delete_head();
		return;
	}
	if (temp_ == tail_)
	{
		delete_tail();
		return;
	}


	const string deleted = temp_->data;
	temp_->prev->next = temp_->next;
	temp_->next->prev = temp_->prev;
	cout << "Deleted: " << deleted << endl;
	delete temp_;
}

bool DoubleLinkedWorldList::is_empty() const
{
	return head_ == nullptr;
}

int DoubleLinkedWorldList::size()
{
	int count{};
	temp_ = head_;
	while (temp_ != nullptr)
	{
		count++;
		temp_ = temp_->next;
	}
	return count;
}

void DoubleLinkedWorldList::show_head_to_tail()
{
	if (is_empty())
	{
		cout << "List is empty" << endl;
		return;
	}
	cout << "Head to tail: ";
	temp_ = head_;
	while (temp_ != nullptr)
	{
		cout << temp_->data << " ";
		temp_ = temp_->next;
	}
	cout << endl;
	cout << "HEAD: " << head_->data << endl;
	cout << "TAIL: " << tail_->data << endl;
	cout << endl;
}

void DoubleLinkedWorldList::show_tail_to_head()
{
	if (is_empty())
	{
		cout << "List is empty" << endl;
		return;
	}
	cout << "Tail to head: ";
	temp_ = tail_;
	while (temp_ != nullptr)
	{
		cout << temp_->data << " ";
		temp_ = temp_->prev;
	}
	cout << endl;
	cout << "TAIL: " << tail_->data << endl;
	cout << "HEAD: " << head_->data << endl;
	cout << endl;
}
