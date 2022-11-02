#pragma once
#include <string>
using namespace std;

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
	void preorder(const node*);
	void postorder(const node*);
	static void extract(node*, node*, int, const string&);

private:
	node *root_{}, *temp_{};
};
