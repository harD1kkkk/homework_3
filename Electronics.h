#pragma once
#include "Goods.h"
#include <iostream>
using namespace std;

class Electronics :
    public Goods
{
private:
    string name_electronics;
    double price_electronics;
    int count_electronics;
public:
    Electronics();
    Electronics(string name_electronics, double price_electronics, int count_electronics);

    void setName(string name_electronics) override;
    void setPrice(double price_electronics) override;
    void setCount(int count_electronics) override;

    string getName() override;
    double getPrice() override;
    int getCount() override;
};

