#pragma once
#include "Goods.h"
#include <iostream>
using namespace std;

class Clothes :
    public Goods
{
private:
    string name_clothes;
    double price_clothes;
    int count_clothes;
public:
    Clothes();
    Clothes(string name_clothes, double price_clothes, int count_clothes);

    void setName(string name_clothes) override;
    void setPrice(double price_clothes) override;
    void setCount(int count_clothes) override;
    
    string getName() override;
    double getPrice() override;
    int getCount() override;
};

