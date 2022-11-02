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
			return;
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

void BinaryTree::inorder(const node* value)
{
	if (root_ == nullptr)
	{
		cout << "Tree is empty" << endl;
		return;
	}
	if (value->left != nullptr)
	{
		inorder(value->left);
	}
	cout << value->data << " ";
	if (value->right != nullptr)
	{
		inorder(value->right);
	}
}

void BinaryTree::preorder(const node* value)
{
	if (root_ == nullptr)
	{
		cout << "Tree is empty" << endl;
		return;
	}
	cout << value->data << " ";
	if (value->left != nullptr)
	{
		preorder(value->left);
	}
	if (value->right != nullptr)
	{
		preorder(value->right);
	}
}

void BinaryTree::postorder(const node* value)
{
	if (root_ == nullptr)
	{
		cout << "Tree is empty" << endl;
		return;
	}
	if (value->left != nullptr)
	{
		postorder(value->left);
	}
	if (value->right != nullptr)
	{
		postorder(value->right);
	}
	cout << value->data << " ";
}

void BinaryTree::extract(node* previous, node* root, const int value, const string& side)
{
	if (root == nullptr)
	{
		cout << "Tree is empty" << endl;
		return;
	}
	if (root->data == value)
	{
		if (root->left == nullptr && root->right == nullptr)
		{
			if (side == "left")
			{
				previous->left = nullptr;
			}
			else
			{
				previous->right = nullptr;
			}
			delete root;
			cout << "Node was deleted" << endl;
			return;
		}
		if (root->left == nullptr && root->right != nullptr)
		{
			if (side == "left")
			{
				previous->left = root->right;
			}
			else
			{
				previous->right = root->right;
			}
			delete root;
			cout << "Node was deleted" << endl;
			return;
		}
		if (root->left != nullptr && root->right == nullptr)
		{
			if (side == "left")
			{
				previous->left = root->left;
			}
			else
			{
				previous->right = root->left;
			}
			delete root;
			cout << "Node was deleted" << endl;
			return;
		}
		if (root->left != nullptr && root->right != nullptr)
		{
			const node* temp = root->right;
			if (temp->left == nullptr && temp->right == nullptr)
			{
				root->data = temp->data;
				root->right = nullptr;
				delete temp;
				cout << "Node was deleted" << endl;
				return;
			}
			if (temp->left != nullptr)
			{
				while (temp->left != nullptr)
				{
					temp = temp->left;
				}
				root->data = temp->data;
				extract(root, root->right, temp->data, "right");
				return;
			}
		}
	}
	if (root->data > value)
	{
		extract(root, root->left, value, "left");
		return;
	}
	if (root->data < value)
	{
		extract(root, root->right, value, "right");
	}
}
