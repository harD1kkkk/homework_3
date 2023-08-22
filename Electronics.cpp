#include "Electronics.h"
#include <iostream>
using namespace std;

Electronics::Electronics() : name_electronics(""), price_electronics(0), count_electronics(0) {
}

Electronics::Electronics(string name_electronics, double price_electronics, int count_electronics) {
	this->name_electronics = name_electronics;
	this->price_electronics = price_electronics;
	this->count_electronics = count_electronics;
}

void Electronics::setName(string name_electronics) {
	this->name_electronics = name_electronics;
}

void Electronics::setPrice(double price_electronics) {
	this->price_electronics = price_electronics;
}

void Electronics::setCount(int count_electronics) {
	this->count_electronics = count_electronics;
}


string Electronics::getName() {
	return name_electronics;
}

double Electronics::getPrice() {
	return price_electronics;
}

int Electronics::getCount() {
	return count_electronics;
}