#include "queue.h"

using namespace std;

queue::queue()
{
	head_ = nullptr;
	tail_ = nullptr;
}

queue::~queue()
{
	const node* current = head_;
	while (current != nullptr)
	{
		const node* next = current->next;
		delete current;
		current = next;
	}
}

void queue::enqueue(const trailer& data)
{
	const auto new_node = new node;
	new_node->data = data;
	new_node->next = nullptr;
	if (head_ == nullptr)
	{
		head_ = new_node;
		tail_ = new_node;
	}
	else
	{
		tail_->next = new_node;
		tail_ = new_node;
	}
}

void queue::dequeue()
{
	if (is_empty())
	{
		cout << endl;
	}
	else
	{
		const auto old_head = head_;
		head_ = head_->next;
		delete old_head;
	}
}

void queue::print() const
{
	if (is_empty())
	{
		cout << endl;
	}
	else
	{
		const node* current = head_;
		while (current != nullptr)
		{
			cout << current->data.plate << " " << current->data.product << endl;
			current = current->next;
		}
	}
}

int queue::size() const
{
	if (is_empty())
	{
		cout << endl;
		return 0;
	}
	int size = 0;
	const node* current = head_;
	while (current != nullptr)
	{
		size++;
		current = current->next;
	}
	return size;
}

void queue::show_head() const
{
	if (is_empty())
	{
		cout << endl;
	}
	else
	{
		cout << head_->data.plate << " " << head_->data.product << endl;
	}
}

void queue::show_tail() const
{
	if (is_empty())
	{
		cout << endl;
	}
	else
	{
		cout << tail_->data.plate << " " << tail_->data.product << endl;
	}
}

bool queue::is_empty() const
{
	if (head_ == nullptr)
	{
		cout << "Empty" << endl;
		return true;
	}
	cout << "Not empty" << endl;
	return false;
}
