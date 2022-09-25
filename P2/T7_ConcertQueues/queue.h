#pragma once
#include <string>

struct buyer
{
	std::string name{};
	int number{};
};

class queue
{
public:
	queue();
	~queue();
	void enqueue(buyer);
	void dequeue();
	void front() const;
	void back() const;
	int size() const;
	bool empty() const;
	bool full() const;
	void print() const;
	void lucky_ones() const;
private:
	buyer data_[20]{};
	int min_, max_, top_;
	buyer head_;
};
