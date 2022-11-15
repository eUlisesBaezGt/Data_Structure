#include "BinaryTree.h"
#include <iostream>
using namespace std;

BinaryTree::BinaryTree()
{
	root_ = nullptr;
	temp_ = nullptr;
	aux_ = nullptr;
}

BinaryTree::~BinaryTree() = default;

node* BinaryTree::get_root() const
{
	return root_;
}

void BinaryTree::create_tree(int num)
{
	temp_ = new node;
	temp_->data = num;
	temp_->left = nullptr;
	temp_->right = nullptr;
}

void BinaryTree::insert(node* start)
{
	if (!root_)
	{
		root_ = temp_;
		cout << "\tROOT INSERTED" << endl;
		return;
	}
	if (temp_->data < start->data) // INSERTS ON LEFT
	{
		if (start->left == nullptr)
		{
			start->left = temp_;
			cout << "\tInserted at left of -> " << start->data << endl;
			return;
		}
		insert(start->left);
		return;
	}
	if (temp_->data > start->data) // INSERTS ON RIGHT
	{
		if (start->right == nullptr)
		{
			start->right = temp_;
			cout << "\tInserted at right of -> " << start->data << endl;
			return;
		}
		insert(start->right);
		return;
	}
	// ALREADY EXISTS, NOT INSERTED
	cout << "\t" << temp_->data << " already exists" << endl;
	delete temp_;
}

void BinaryTree::inorder(const node* start)
{
	if (!root_)
	{
		cout << "Tree is empty" << endl;
		return;
	}
	if (start->left != nullptr) inorder(start->left);
	cout << "\t" << start->data;
	if (start->right != nullptr) inorder(start->right);
}

void BinaryTree::preorder(const node* start)
{
	if (!root_)
	{
		cout << "Tree is empty" << endl;
		return;
	}
	cout << "\t" << start->data;
	if (start->left != nullptr) preorder(start->left);
	if (start->right != nullptr) preorder(start->right);
}

void BinaryTree::postorder(const node* start)
{
	if (!root_)
	{
		cout << "Tree is empty" << endl;
		return;
	}
	if (start->left != nullptr) postorder(start->left);
	if (start->right != nullptr) postorder(start->right);
	cout << "\t" << start->data;
}

void BinaryTree::extract(node* father, node* start, const int value, const string side)
{
	if (start == nullptr) // EMPTY TREE
	{
		cout << "Value not found in tree" << endl;
		return;
	}
	if (value < start->data) // SEARCH ON LEFT
	{
		extract(start, start->left, value, "left");
		return;
	}
	if (value > start->data) // SEARCH ON RIGHT
	{
		extract(start, start->right, value, "right");
		return;
	}
	if (start->left == nullptr && start->right == nullptr) // CASE WHERE NOT CHILD
	{
		cout << "\t(C1) Extracted " << start->data << endl << endl;
		if (side == "left")
			father->left = nullptr;
		if (side == "right")
			father->right = nullptr;
		if (root_ == start)
			root_ = nullptr;

		delete start;
		return;
	}

	if (start->left == nullptr) // CASE 2.1: RIGHT CHILD
	{
		if (side == "left")
			father->left = start->right;
		if (side == "right")
			father->right = start->right;
		cout << "\t(C2.1) Extracted " << start->data << endl << endl;
		if (root_ == start)
			root_ = start->right;
		delete start;
		return;
	}
	if (start->right == nullptr) // CASE 2.2: LEFT CHILD
	{
		if (side == "left")
			father->left = start->left;
		if (side == "right")
			father->right = start->left;
		cout << "\t(C2.2) Extracted " << start->data << endl << endl;
		if (root_ == start)
			root_ = start->right;
		delete start;
		return;
	}
	root_link_ = "left";
	exchange(start, start, start->left, "left"); // CASE 3: BOTH CHILD
}

void BinaryTree::exchange(node* found, node* current, node* next, const string side)
{
	int aux;
	if (side == "left") // LEFT SIDE
	{
		if (next->right == nullptr) // IS THE RIGHT-EST
		{
			cout << "\t(C3) Changed: " << found->data << " for " << next->data << endl;
			aux = found->data;
			found->data = next->data;
			next->data = aux;
			extract(current, next, next->data, root_link_);
			return;
		}
		// CONTINUE MOVING TO RIGHT
		root_link_ = "right";
		exchange(found, next, next->right, "left");
		return;
	}
	if (side == "right") // RIGHT SIDE
	{
		if (next->left == nullptr) // IS THE LEFT-EST
		{
			cout << "\t(C3) Changed: " << found->data << " for " << next->data << endl;
			aux = found->data;
			found->data = next->data;
			next->data = aux;
			extract(current, next, next->data, root_link_);
			return;
		}
		// CONTINUE MOVING TO LEFT
		root_link_ = "left";
		exchange(found, next, next->left, "der");
	}
}
