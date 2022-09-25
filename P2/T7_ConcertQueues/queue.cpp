#include <iostream>
#include <utility>
#include "queue.h"

using namespace std;


queue::queue()
{
	this->top_ = -1;
	this->min_ = 0;
	this->max_ = 20;
	this->head_ = buyer{};
	for (int i = 0; i < this->max_; i++) this->data_[i] = buyer{};
}

queue::~queue() = default;

void queue::enqueue(buyer value)
{
	if (full())
	{
		return;
	}
	this->top_++;
	this->data_[this->top_] = std::move(value);
}

void queue::dequeue()
{
	if (empty())
	{
		return;
	}
	this->head_ = this->data_[0];
	for (int i = 0; i < this->top_; i++)
	{
		this->data_[i] = this->data_[i + 1];
	}
	this->top_--;
}

void queue::front() const
{
	if (empty())
	{
		return;
	}
	cout << this->data_[0].name << " " << this->data_[0].number << endl;
}

void queue::print() const
{
	if (empty())
	{
		return;
	}
	for (int i = 0; i <= this->top_; i++)
	{
		cout << this->data_[i].name << " " << this->data_[i].number << endl;
	}
	cout << endl;
}

void queue::lucky_ones() const
{
	if (empty())
	{
		return;
	}
	for (int i = 0; i <= this->top_; i++)
	{
		if (this->data_[i].number % 5 == 0)
		{
			cout << this->data_[i].name << " " << this->data_[i].number << endl;
		}
	}
	cout << endl;
}

void queue::back() const
{
	if (empty())
	{
		return;
	}
	cout << this->data_[this->top_].name << " " << this->data_[this->top_].number << endl;
}

int queue::size() const
{
	if (empty())
	{
		return 0;
	}
	return this->top_ + 1;
}

bool queue::empty() const
{
	if (this->top_ == -1)
	{
		cout << "Empty" << endl;
		return true;
	}
	return false;
}

bool queue::full() const
{
	if (this->top_ == this->max_ - 1)
	{
		cout << "Full" << endl;
		return true;
	}
	return false;
}
