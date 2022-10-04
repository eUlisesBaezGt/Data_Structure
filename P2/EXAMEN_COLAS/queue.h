#pragma once
#include <string>
#include <iostream>
using namespace std;

struct applicant {
	applicant()= default;
	applicant(string n, int d) {
		this->name = n;
		this->digits = d;
	}
	string name{};
	int digits{};
	void details() {
		cout << "NAME\t" << "DIGITS" << endl;
		cout << this->name << "\t" << this->digits << endl;
	}
};

struct node {
	applicant data;
	node* next{};
};

class queue
{
public:
	queue();
	~queue();
	void get_applicant_in_line(applicant);
	applicant pass_to_interview();

	void show() const;
	int size() const;
	void show_head() const;
	void show_tail() const;
	bool is_empty() const;

private:
	node* head_;
	node* tail_;
};