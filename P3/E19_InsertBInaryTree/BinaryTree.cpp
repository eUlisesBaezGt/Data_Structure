#include <iostream>
#include "BinaryTree.h"

using namespace std;

BinaryTree::BinaryTree()
{
	root_ = nullptr;
}

BinaryTree::~BinaryTree() = default;

void BinaryTree::create_tree(const int value)
{
	temp_ = new node;
	temp_->data = value;
	temp_->left = nullptr;
	temp_->right = nullptr;
}

node* BinaryTree::get_root() const
{
	return root_;
}

void BinaryTree::insert(node* value)
{
	if (root_ == nullptr)
	{
		root_ = temp_;
		cout << "Root Node was Added" << endl;
		return;
	}
	if (temp_->data < value->data)
	{
		if (value->left == nullptr)
		{
			value->left = temp_;
			cout << "Node was Added to the Left of ----> " << value->data << endl;
		}
		insert(value->left);
		return;
	}
	if (temp_->data > value->data)
	{
		if (value->right == nullptr)
		{
			value->right = temp_;
			cout << "Node was Added to the Right of ----> " << value->data << endl;
			return;
		}
		insert(value->right);
		return;
	}
	if (temp_->data == value->data)
	{
		cout << "Node already exists" << endl;
	}
}
