#include "queue.h"

#include <utility>

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

void queue::add_motorcycle_to_queue(motorcycle data)
{
	const auto new_node = new node;
	new_node->data = move(data);
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

void queue::show() const
{
	if (is_empty() != true)
	{
		const node* current = head_;
		std::cout << "Plates\t" << "Cylinders" << endl;
		while (current != nullptr)
		{
			cout << current->data.plate << "\t" << current->data.cylinders << endl;
			current = current->next;
		}
	}
	cout << endl;
}

motorcycle queue::pay_motorcycle()
{
	if (head_ == nullptr)
	{
		cout << "Queue is empty" << endl;
		return {};
	}
	motorcycle data = head_->data;
	node* next = head_->next;
	delete head_;
	head_ = next;
	return data;
}

int queue::size() const
{
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
		return;
	}
	cout << "Head: " << "PLATE: " << head_->data.plate << "\t" << "TAIL: " << head_->data.cylinders << endl;
}

void queue::show_tail() const
{
	if (is_empty())
	{
		return;
	}
	cout << "Tail: " << "PLATE: " << tail_->data.plate << "\t" << "TAIL: " << tail_->data.cylinders << endl;
}

bool queue::is_empty() const
{
	if (head_ == nullptr)
	{
		cout << "Queue is empty" << endl;
		return true;
	}
	cout << "Queue is not empty" << endl;
	return false;
}
