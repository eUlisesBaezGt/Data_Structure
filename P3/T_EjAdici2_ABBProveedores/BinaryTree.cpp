#include <iostream>
#include "BinaryTree.h"

using namespace std;

BinaryTree::BinaryTree() { root_ = nullptr; }

BinaryTree::~BinaryTree() = default;

void BinaryTree::create_tree(const Supplier& value)
{
	temp_ = new Node;
	temp_->data = value;
	temp_->left = nullptr;
	temp_->right = nullptr;
}

Node* BinaryTree::get_root() const { return root_; }

void BinaryTree::insert(Node* value)
{
	if (root_ == nullptr)
	{
		root_ = temp_;
		cout << "ROOT node is added" << endl;
		return;
	}
	if (temp_->data.id < value->data.id)
	{
		if (value->left == nullptr)
		{
			value->left = temp_;
			cout << "Node added to the LEFT of ----> " << value->data.id << endl;
			return;
		}
		insert(value->left);
		return;
	}
	if (temp_->data.id > value->data.id)
	{
		if (value->right == nullptr)
		{
			value->right = temp_;
			cout << "Node added to the RIGHT of ----> " << value->data.id << endl;
			return;
		}
		insert(value->right);
		return;
	}
	if (temp_->data.id == value->data.id)
	{
		cout << "Node already exists" << endl;
	}
}

void BinaryTree::search(const Node* value, const int key)
{
	if (value == nullptr)
	{
		cout << "Node not found" << endl;
		return;
	}
	if (value->data.id == key)
	{
		cout << "Node found" << endl;
		cout << "ID: " << value->data.id << endl;
		cout << "Name: " << value->data.name << endl;
		return;
	}
	if (key < value->data.id)
	{
		search(value->left, key);
		return;
	}
	if (key > value->data.id)
	{
		search(value->right, key);
	}
}
