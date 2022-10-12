#pragma once
#include <string>

using namespace std;

class circular_linked_list
{
public:
	circular_linked_list();
	~circular_linked_list();

	void show_all_list() const;
	void insert_at_any_position(const string&, const string&);
	void delete_odd_nodes();
	void odd_cycle();

	bool is_empty() const;
	int size() const;
private:
	struct node
	{
		string data{};
		node* next{};
	};

	node *head_, *tail_;
};
