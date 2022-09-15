#pragma once
#include <iostream>

using namespace std;

struct mattress {
    string brand;
    string size;
};

class stack {
public:
    stack();

    ~stack();

    void push(mattress);

    mattress pop();
	
    bool is_empty() const;

    void print() const;

    void top_data() const;


private:
    struct node {
        mattress data;
        node* next{};
    };

    node* top_;
};

