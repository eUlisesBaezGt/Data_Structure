#include <iostream>
#include "AdyList.h"
using namespace std;

ady_list::ady_list()
{
	this->head_ = nullptr;
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
