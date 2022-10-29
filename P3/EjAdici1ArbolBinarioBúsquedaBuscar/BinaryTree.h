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
	void inorder(const node*);
	void search(const node*, int);

private:
	node *root_{}, *temp_{};
};
