#include <iostream>
#include "AdyList.h"
using namespace std;

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

int ady_list::add_edge(char org, char dest, int weight)
{
	int org_exists, dest_exists, ady_exists;
	node *org_pos, *dest_pos;
	edge* ady_pos;

	if (!this->head_) // EMPTY GRAPH. EDGE NOT INSERTED
		return -1;

	org_exists = search_node(org, org_pos);
	dest_exists = search_node(dest, dest_pos);

	if (org_exists == -1 || dest_exists == -1) // NODES DOESN'T EXISTS. EDGE NOT INSERTED
		return -1;

	if(!org_pos->next) // EMPTY EDGES LIST
	{
		ady_pos = new edge;
		this->ady_->dest = dest;
		return 0;
	}

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
	cout << "\t" << this->aux_->nom << " => ";
	this->aux_ady_ = this->aux_->next;
	while (this->aux_ady_)
	{
		cout << this->aux_ady_->nom << "-" << this->aux_ady_->weight << " -> ";
		this->aux_ady_ = this->aux_ady_->next;
	}
	cout << "NULL" << endl;
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
	if (!org->next) // NO ADYACENT NODES
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
