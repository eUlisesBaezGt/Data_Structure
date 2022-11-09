#pragma once
#include <iostream>
using namespace std;

struct edge;

struct node
{
	char nom;
	node* next_node;
	edge* next;
};

struct edge
{
	char nom;
	int weight;
	node* next_node;
	edge* next;
};

class ady_list
{
public:
	ady_list();
	int add_node(char);
	int add_edge(char, char, int);
	void show_full();
	int search_node(char, node*&);
	int search_edge(node*, char, edge*&);
private:
	node *temp_{}, *aux_{}, *head_;
	edge *ady_{}, *aux_ady_{};
};
