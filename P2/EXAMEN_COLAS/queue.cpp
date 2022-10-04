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

void queue::get_applicant_in_line(applicant data)
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
		cout << "NAME\t" << "DIGITS" << endl;
		while (current != nullptr)
		{
			cout << current->data.name << "\t" << current->data.digits << endl;
			current = current->next;
		}
		this->show_head();
		this->show_tail();
	}
	cout << endl;
}

applicant queue::pass_to_interview()
{
	if (head_ == nullptr)
	{
		cout << "Queue is empty" << endl;
		return {};
	}
	applicant data = head_->data;
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
	cout << "Head" << endl << "NAME: " << head_->data.name << "\t" << "DIGITS: " << head_->data.digits << endl;
}

void queue::show_tail() const
{
	if (is_empty())
	{
		return;
	}
	cout << "Tail" << endl << "NAME: " << tail_->data.name << "\t" << "DIGITS: " << tail_->data.digits << endl;
}

bool queue::is_empty() const
{
	if (head_ == nullptr)
	{
		return true;
	}
	return false;
}