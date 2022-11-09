#include "AdyMatrx.h"

AdyMatrx::AdyMatrx(const int size)
{
	this->max_size_ = size;
	this->used_ = 0;
	this->nodes_ = new char[size];
	this->edges_ = new int*[size]; // MATRIX LINES
	for (int i = 0; i < size; i++) // MATRIX COLUMNS
	{
		this->edges_[i] = new int[size];
		this->nodes_[i] = '=';
		for (int j = 0; j < size; j++) // INNIT MATRIX
			this->edges_[i][j] = -1;
	}
}

int AdyMatrx::insert_node(const char value)
{
	if (this->used_ == this->max_size_) // FULL
	{
		cout << "Graph is full" << endl;
		return -2;
	}

	if (this->search_node(value) != -1) // ALREADY EXISTS
	{
		cout << "Node already exists" << endl;
		return -1;
	}

	this->nodes_[this->used_] = value; // INSERTED
	this->used_++;
	cout << "Node " << value << " inserted" << endl;
	return 0;
}

int AdyMatrx::insert_edge(const char org, const char dest, int weight)
{
	if (this->used_ == 0) // EMPTY GRAPH. NO ORIGIN OR DESTINY NODE. NOT INSERTED
	{
		cout << "Graph is empty" << endl;
		return -1;
	}

	this->org_pos_ = search_node(org);
	this->dest_pos_ = search_node(dest);

	if (this->org_pos_ == -1 || this->dest_pos_ == -1) // DOESN'T EXISTS, ALREADY INSERTED
	{
		cout << "TRY AGAIN... Node doesn't exists" << endl;
		return -2;
	}

	if (this->edges_[this->org_pos_][this->dest_pos_] != -1) // ALREADY EXISTS
	{
		cout << "Edge already exists" << endl;
		return -2;
	}

	this->edges_[this->org_pos_][this->dest_pos_] = weight; // OK. INSERTED BIDIRECTIONAL EDGE
	this->edges_[this->dest_pos_][this->org_pos_] = weight;
	cout << "Edge " << org << " - " << dest << " inserted in both directions" << endl;
	return 0;
}

void AdyMatrx::show_full() const
{
	cout << "\nMATRIX" << endl;
	if (this->used_ == 0)
	{
		cout << "Empty matrix" << endl;
		return;
	}
	cout << "\t";
	for (int i = 0; i < this->max_size_; i++)
		cout << "\t" << this->nodes_[i];
	cout << endl;
	for (int i = 0; i < this->max_size_; i++)
	{
		cout << "\t" << this->nodes_[i];
		for (int j = 0; j < this->max_size_; j++)
		{
			if (this->edges_[i][j] == -1)
				cout << "\t" << "-";
			else
				cout << "\t" << this->edges_[i][j];
		}
		cout << endl;
	}
}

int AdyMatrx::search_node(const char value) const
{
	for (int i = 0; i < this->max_size_; i++)
	{
		if (value == nodes_[i])
		{
			cout << "Node " << value << " found" << endl;
			return i;
		}
	}

	cout << "Node " << value << " doesn't exists" << endl;
	return -1; // NOT FOUND
}
