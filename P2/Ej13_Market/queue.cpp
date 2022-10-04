#include "queue.h"

queue::queue()
{
	head = nullptr;
	tail = nullptr;
}

queue::~queue()
{
	const Node* current = head;
	while (current != nullptr)
	{
		const Node* next = current->next;
		delete current;
		current = next;
	}
}

void queue::enqueue(string data)
{
	auto newNode = new Node;
	newNode->data = data;
	newNode->next = nullptr;
	if (head == nullptr)
	{
		head = newNode;
		tail = newNode;
	}
	else
	{
		tail->next = newNode;
		tail = newNode;
	}
}

string queue::dequeue()
{
	if (head == nullptr)
	{
		return "";
	}
	const Node* temp = head;
	head = head->next;
	string data = temp->data;
	delete temp;
	return data;
}

void queue::print() const
{
	Node* current = head;
	while (current != nullptr)
	{
		cout << current->data << "\t";
		current = current->next;
	}
	cout << endl;
}

bool queue::isEmpty() const
{
	if (head == nullptr)
		return true;
	return false;
}
