#pragma once
#include <iostream>
using namespace std;

class AdyMatrx
{
public:
	AdyMatrx(int);
	int insert_node(char);
	int insert_edge(char, char, int);
	void show_full() const;
private:
	int search_node(char) const;
	char* nodes_;
	int** edges_{};
	int max_size_, used_, org_pos_{}, dest_pos_{};
};
