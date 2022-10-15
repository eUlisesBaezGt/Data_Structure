#include <iostream>
#include "LinkedCircularList.h"

using namespace std;

LinkedCircularList::LinkedCircularList()
{
	head_ = tail_ = temp_ = nullptr;
}

LinkedCircularList::~LinkedCircularList() = default;

void LinkedCircularList::insert_at_end(const string& value)
{
	temp_ = new node;
	temp_->data = value;
	temp_->next = head_;

	if (head_ == nullptr)
	{
		head_ = tail_ = temp_;
		tail_->next = head_;
	}
	else
	{
		tail_->next = temp_;
		tail_ = temp_;
	}
}

void LinkedCircularList::delete_element(const string& value)
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

void LinkedCircularList::show_from_head_to_tail()
{
	if (is_empty())
	{
		cout << "List is empty" << endl;
		return;
	}
	temp_ = head_;
	do
	{
		cout << temp_->data << " ";
		temp_ = temp_->next;
	}
	while (temp_ != head_);
	cout << endl;
}

void LinkedCircularList::show_from_word_to_previous_word(const std::string& to_search)
{
	// Solicitar una palabra. Buscarla en la lista e iniciar a mostrar todas las palabras a partir de la
	// posición en que encontró la palabra solicitada y terminando en la palabra anterior a la buscada.
	// Si la palabra no se encuentra en la lista, mostrar un mensaje indicando que no se encontró la palabra.
	node* temp1 = head_;
	while (temp1->next != head_ && temp1->data != to_search)
	{
		temp1 = temp1->next;
	}
	if (temp1->data == to_search)
	{
		do
		{
			cout << temp1->data << " ";
			temp1 = temp1->next;
		}
		while (temp1->data != to_search);
		cout << endl;
	}
	else
	{
		cout << "Element not found" << endl;
	}
}


bool LinkedCircularList::is_empty() const
{
	return head_ == nullptr;
}
