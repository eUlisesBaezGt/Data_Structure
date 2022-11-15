#include <iostream>
using namespace std;
#include "AdyList.h"

ady_list::ady_list()
{
	this->head_ = nullptr;
}

int ady_list::add_node(const char value)
{
	node* pos_node;

	this->temp_ = new node; // Create a new node
	this->temp_->nom = value;
	this->temp_->next_node = nullptr;
	this->temp_->next = nullptr;

	if (!this->head_) // EMPTY GRAPH. NODE INSERTED
	{
		this->head_ = temp_;
		return 0;
	}

	const int exists = search_node(value, pos_node);

	if (exists == -1) // NODE DOESN'T EXISTS. INSERTED
	{
		pos_node->next_node = temp_;
		return 0;
	}

	delete temp_; // NODE EXISTS. NOT INSERTED, MEMORY FREED
	return -1;
}

int ady_list::add_edge(const char org, const char dest, const int weight)
{
	node *org_pos, *dest_pos;
	edge* ady_pos;

	if (!this->head_) // EMPTY GRAPH. EDGE NOT INSERTED
		return -1;

	this->ady_ = new edge; // Create a new edge
	this->ady_->nom = dest;
	this->ady_->weight = weight;
	this->ady_->next = nullptr;

	const int org_exists = search_node(org, org_pos);
	const int dest_exists = search_node(dest, dest_pos);

	if (org_exists == -1 || dest_exists == -1) // NODES DOESN'T EXISTS. 
		return -1;

	if (!org_pos->next) // NODE EXISTS BUT NO ADJACENT NODES
	{
		org_pos->next = ady_;
		return 0;
	}

	const int ady_exists = search_edge(org_pos, dest, ady_pos);

	if (ady_exists == -1) // ADJACENT NODE DOESN'T EXISTS. INSERTED
	{
		ady_pos->next = ady_;
		ady_->next_node = dest_pos;
		return 0;
	}
	delete ady_; // ADJACENT NODE EXISTS. NOT INSERTED, MEMORY FREED
	return -2;
}

void ady_list::show_full()
{
	if (!this->head_)
	{
		cout << "Empty graph" << endl;
		return;
	}
	cout << "\nNode list:" << endl;
	cout << "\n\t";

	this->aux_ = this->head_;
	do
	{
		cout << this->aux_->nom << " -> ";
		this->aux_ = this->aux_->next_node;
	}
	while (this->aux_);
	cout << "NULL" << endl;

	cout << "\nEdge list:\n" << endl;
	this->aux_ = this->head_;
	do
	{
		cout << "\t" << this->aux_->nom << " -> ";
		this->aux_ady_ = this->aux_->next;
		while (aux_ady_)
		{
			cout << aux_ady_->nom << "-" << aux_ady_->weight << " -> ";
			aux_ady_ = aux_ady_->next;
		}
		cout << "NULL" << endl;
		this->aux_ = this->aux_->next_node;
	}
	while (this->aux_);
}

int ady_list::search_node(char name, node*& pos)
{
	if (!this->head_) // EMPTY GRAPh
		return -1;
	this->aux_ = this->head_;
	do
	{
		pos = this->aux_;
		if (this->aux_->nom == name) // ALREADY EXISTS 
			return 0;
		this->aux_ = this->aux_->next_node;
	}
	while (this->aux_);

	return -1; // NOT FOUND
}

int ady_list::search_edge(node* org, char des, edge*& pos)
{
	if (!org->next) // NO ADJACENT NODES
		return -1;
	this->aux_ady_ = org->next;
	do
	{
		pos = this->aux_ady_;
		if (this->aux_ady_->nom == des) // ALREADY EXISTS
			return 0;
		this->aux_ady_ = this->aux_ady_->next;
	}
	while (this->aux_ady_);

	return -1; // NOT FOUND
}
