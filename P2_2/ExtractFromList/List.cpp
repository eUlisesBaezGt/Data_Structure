#include "List.h"

#include <iostream>
#include <utility>

using namespace std;

list::list()
{
	head_ = nullptr;
}

list::~list() = default;

void list::insert_at_start(std::string x)
{
	const auto temp = new node;
	temp->data = std::move(x);
	temp->next = head_;
	head_ = temp;
}

void list::insert_aside(string x, string n)
{
	auto temp = new node;
	temp->data = std::move(x);
	temp->next = nullptr;

	if (head_ == nullptr)
	{
		head_ = temp;
		return;
	}

	auto p = head_;
	while (p->next != nullptr && p->data != n)
	{
		p = p->next;
	}

	if (p->data == n)
	{
		temp->next = p->next;
		p->next = temp;
	}
}

void list::insert_at_end(std::string x)
{
	const auto temp = new node;
	temp->data = std::move(x);
	temp->next = nullptr;

	if (head_ == nullptr)
	{
		head_ = temp;
	}
	else
	{
		node* temp1 = head_;
		while (temp1->next != nullptr)
		{
			temp1 = temp1->next;
		}
		temp1->next = temp;
	}
}

void list::print() const
{
	const node* temp = head_;
	while (temp != nullptr)
	{
		cout << temp->data << "\t";
		temp = temp->next;
	}
	cout << endl;
}

std::string list::extract_at_start()
{
	if (head_ == nullptr)
	{
		return "";
	}

	const auto temp = head_;
	head_ = head_->next;
	const auto x = temp->data;
	delete temp;
	return x;
}

std::string list::extract(const std::string x)
{
	if (head_ == nullptr)
	{
		return "";
	}

	if (head_->data == x)
	{
		return extract_at_start();
	}

	auto p = head_;
	while (p->next != nullptr && p->next->data != x)
	{
		p = p->next;
	}

	if (p->next == nullptr)
	{
		return "";
	}

	const auto temp = p->next;
	p->next = p->next->next;
	const auto y = temp->data;
	delete temp;
	return y;
}

std::string list::extract_at_end()
{
	if (head_ == nullptr)
	{
		return "";
	}

	if (head_->next == nullptr)
	{
		const auto temp = head_;
		head_ = nullptr;
		const auto x = temp->data;
		delete temp;
		return x;
	}

	auto p = head_;
	while (p->next->next != nullptr)
	{
		p = p->next;
	}

	const auto temp = p->next;
	p->next = nullptr;
	const auto x = temp->data;
	delete temp;
	return x;
}
