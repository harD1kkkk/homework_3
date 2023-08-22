#include "Clothes.h"
#include <iostream>
using namespace std;

Clothes::Clothes() : name_clothes(""), price_clothes(0), count_clothes(0) {
}

Clothes::Clothes(string name_clothes, double price_clothes, int count_clothes) {
	this->name_clothes = name_clothes;
	this->price_clothes = price_clothes;
	this->count_clothes = count_clothes;
}

void Clothes::setName(string name_clothes) {
	this->name_clothes = name_clothes;
}

void Clothes::setPrice(double price_clothes) {
	this->price_clothes = price_clothes;
}

void Clothes::setCount(int count_clothes) {
	this->count_clothes = count_clothes;
}


string Clothes::getName() {
	return name_clothes;
}

double Clothes::getPrice() {
	return price_clothes;
}

int Clothes::getCount() {
	return count_clothes;
}