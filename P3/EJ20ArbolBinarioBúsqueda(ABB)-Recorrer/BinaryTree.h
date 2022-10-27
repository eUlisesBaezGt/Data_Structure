#pragma once

struct node
{
	node* left;
	int data;
	node* right;
};

class BinaryTree
{
public:
	BinaryTree();
	~BinaryTree();
	void create_tree(int);
	node* get_root() const;
	void insert(node*);
	void inorder(node*);
	void preorder(node*);
	void postorder(node*);

private:
	node *root_{}, *temp_{};
};
