#include "CircularLinkedList.h"

CircularLinkedList::CircularLinkedList()
{
	head_ = tail_ = checked_ = nullptr;
}

CircularLinkedList::~CircularLinkedList() = default;

void CircularLinkedList::show_all_list() const
{
	if (is_empty())
	{
		cout << "List is empty" << endl;
		return;
	}
	const node* temp = head_;
	while (temp != tail_)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << temp->data << endl;
}

void CircularLinkedList::insert_at_any_position(const string& value, const string& before)
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

void CircularLinkedList::delete_element(const string& value)
{
	if (is_empty())
	{
		cout << "List is empty" << endl;
		return;
	}
	if (head_->data == value)
	{
		if (head_ == tail_)
		{
			delete head_;
			head_ = tail_ = nullptr;
			return;
		}
		const node* temp = head_;
		head_ = head_->next;
		tail_->next = head_;
		delete temp;
		return;
	}
	node* temp = head_;
	while (temp->next != head_ && temp->next->data != value)
	{
		temp = temp->next;
	}
	if (temp->next == head_)
	{
		cout << "Element not found" << endl;
		return;
	}
	if (temp->next == tail_)
	{
		tail_ = temp;
		tail_->next = head_;
		delete temp->next;
		return;
	}
	const node* temp2 = temp->next;
	temp->next = temp->next->next;
	delete temp2;
}

bool CircularLinkedList::search_word(const string& value)
{
	int count = 0;
	// Buscar una palabra e indicar si se encuentra o no. Cada búsqueda debe iniciar en el elemento en que terminó la búsqueda anterior.
	if (is_empty())
	{
		cout << "List is empty" << endl;
		return false;
	}
	if (checked_ == nullptr) checked_ = head_;

	while (true)
	{
		if (checked_->data == value) return true;
		checked_ = checked_->next;
		count++;
		if (count == size()) return false;
	}
}


void CircularLinkedList::searched(const bool value)
{
	if (value)
	{
		cout << "Element found" << endl;
	}
	else
	{
		cout << "Element not found" << endl;
	}
}

bool CircularLinkedList::is_empty() const
{
	return head_ == nullptr;
}

int CircularLinkedList::size() const
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
