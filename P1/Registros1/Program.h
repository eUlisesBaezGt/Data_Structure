// Created by eubgt on 8/11/22.

#pragma once
#include <string>

struct Branch
{
	int id{};
	std::string manager;
	double sales[2]{};
};

class Program
{
public:
	Program();
	void run();
	void AskData(Branch []);
	void OrderID(Branch []);
	void ShowData(Branch []);
};
