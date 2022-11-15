#pragma once
struct node;

struct edge
{
	char nom;
	int weight;
	node* next_node;
	edge* next;
};

struct node
{
	char nom;
	node* next_node;
	edge* next;
};

class ady_list
{
public:
	ady_list();
	~ady_list();
	int add_node(char);
	int add_edge(char, char, int);
	int search_node(char, node*&);
	int search_edge(node*, char, edge*&);
	void show_full();
	void travel_deep();
	void travel_breadth();
	void insert_stack(node*);
	node* extract_stack();
	void insert_queue(node*);
	node* extract_queue();

private:
	node *temp_{}, *aux_{}, *head_;
	edge *ady_{}, *aux_ady_{};
	int size_{}, top_{}, front_{}, rear_{};
	node **stack_{}, **queue_{}, **visited_{};
};
