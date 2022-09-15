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

void stack::push(mattress x) {
	const auto temp = new node;
    temp->data = std::move(x);
    temp->next = top_;
    top_ = temp;
    cout << "PUSHED" << endl;
}

mattress stack::pop() {
    if (top_ == nullptr) {
        cout << "Stack is empty" << endl;
    }
    else {
        node* temp = top_;
        top_ = top_->next;
        mattress x = temp->data;
        delete temp;
		cout << "POPPED" << endl;
        return x;
    }
    return {};
}

bool stack::is_empty() const
{
    if (top_ == nullptr) {
        cout << "Stack is empty" << endl;
        return true;
    }
    else {
        cout << "Stack is not empty" << endl;
        return false;
    }
}

void stack::print() const
{
    if (this->is_empty()) {
        return;
    }
    else {
	    const node* temp = top_;
        cout << "BRAND\t|SIZE" << endl;
        while (temp != nullptr) {
			cout << temp->data.brand << "\t|" << temp->data.size << endl;
            temp = temp->next;
        }
        cout << endl;
    }
}

void stack::top_data() const
{
	if (top_ == nullptr) {
		cout << "Stack is empty" << endl;
	}
	else {
		cout << "BRAND\t|SIZE" << endl;
		cout << top_->data.brand << "\t|" << top_->data.size << endl;
	}
}
