#pragma once
#include <string>

struct Supplier
{
	int id;
	std::string name;
};

struct Node
{
	Node* left;
	Supplier data;
	Node* right;
};

class BinaryTree
{
public:
	BinaryTree();
	~BinaryTree();
	void create_tree(const Supplier&);
	Node* get_root() const;
	void insert(Node*);
	static void search(const Node*, int);

private:
	Node *root_{}, *temp_{};
};
