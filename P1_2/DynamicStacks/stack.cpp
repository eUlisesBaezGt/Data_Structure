#include "stack.h"

stack::stack()
{
	top_ = nullptr;
}

stack::~stack()
{
	while (top_ != nullptr)
	{
		const node* temp = top_;
		top_ = top_->next;
		delete temp;
	}
}

void stack::push(int x)
{
	const auto temp = new node;
	temp->data = x;
	temp->next = top_;
	top_ = temp;
}

int stack::pop()
{
	if (top_ == nullptr)
	{
		cout << "Stack is empty" << endl;
		return -1;
	}
	const node* temp = top_;
	top_ = top_->next;
	const int x = temp->data;
	delete temp;
	return x;
}

bool stack::is_empty() const
{
	return top_ == nullptr;
}

void stack::print() const
{
	const node* temp = top_;
	while (temp != nullptr)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int stack::top_data() const
{
	if (top_ == nullptr)
	{
		cout << "Stack is empty" << endl;
		return -1;
	}
	return top_->data;
}
