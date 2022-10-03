#include "queue.h"

#include <utility>

using namespace std;


queue::queue()
{
	head_ = nullptr;
	tail_ = nullptr;
}

// COPY CONSTRUCTOR
queue::queue(const queue& other)
{
	if (other.head_ == nullptr)
	{
		head_ = nullptr;
		tail_ = nullptr;
	}
	else
	{
		head_ = new node;
		head_->data = other.head_->data;
		node* new_node = head_;
		for (const node* other_node = other.head_->next; other_node != nullptr; other_node = other_node->next)
		{
			new_node->next = new node;
			new_node = new_node->next;
			new_node->data = other_node->data;
		}
		new_node->next = nullptr;
		tail_ = new_node;
	}
}

// MOVE CONSTRUCTOR
queue::queue(queue&& other) noexcept
{
	head_ = other.head_;
	tail_ = other.tail_;
	other.head_ = nullptr;
	other.tail_ = nullptr;
}

//COPY ASSIGNMENT OPERATOR
queue& queue::operator=(const queue& other)
{
	if (this != &other)
	{
		queue temp(other);
		swap(head_, temp.head_);
		swap(tail_, temp.tail_);
	}
	return *this;
}

// MOVE ASSIGNMENT OPERATOR
queue& queue::operator=(queue&& other) noexcept
{
	if (this != &other)
	{
		delete head_;
		head_ = other.head_;
		tail_ = other.tail_;
		other.head_ = nullptr;
		other.tail_ = nullptr;
	}
	return *this;
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

void queue::enqueue(motorcycle data)
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

void queue::print() const
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

motorcycle queue::dequeue()
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
