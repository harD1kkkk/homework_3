#pragma once
#include <iostream>
using namespace std;

class Goods
{
private:
	string name;
	double price;
	int count;
public:
	void virtual setName(string name) = 0;
	void virtual setPrice(double price) = 0;
	void virtual setCount(int count) = 0;

	string virtual getName() = 0;
	double virtual getPrice() = 0;
	int virtual getCount() = 0;
};