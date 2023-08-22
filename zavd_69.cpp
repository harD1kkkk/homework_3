// zavd_69.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "Goods.h"
#include "Clothes.h"
#include "Electronics.h"
using namespace std;

int main()
{
    int size = 0;
    cout << "Enter size: ";
    cin >> size;

    Goods** goods = new Goods * [size];
    int check;

    string name = "";
    double price = 0;
    int count = 0;

    int check_position = 0;

    int choice = 0;
    cout << "Welcome to Wolmart!\nAdd new item.\n";
    do
    {
        cout << "\t1-Electronics.\n\t2-Clothes.\n\t3-Show all items.\n\t4-Exit\n";
        cout << "Make a choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            while (true)
            {
                if (check_position < size)
                {
                    Goods* Electrics = new Electronics();
                    cout << "Enter name of the phone brand: ";
                    cin >> name;
                    Electrics->setName(name);

                    cout << "Enter phone price: ";
                    cin >> price;
                    Electrics->setPrice(price);

                    cout << "Enter count in goods: ";
                    cin >> count;
                    Electrics->setCount(count);

                    goods[check_position] = Electrics;

                    cout << "Add more? (1-YES/0-NO)\n";
                    cin >> check;
                    if (check == 1)
                    {
                        check_position++;
                        continue;
                    }
                    else
                    {
                        check_position++;
                        break;
                    }
                    cout << endl << endl;
                }
                else
                {
                    cerr << "Array is full!" << endl;
                    break;
                }
            }
            break;

        case 2:
            while (true)
            {
                if (check_position < size)
                {
                    Goods* Clothing = new Clothes();
                    cout << "Enter name of the clothing brand: ";
                    cin >> name;
                    Clothing->setName(name);

                    cout << "Enter clothing price: ";
                    cin >> price;
                    Clothing->setPrice(price);

                    cout << "Enter count in goods: ";
                    cin >> count;
                    Clothing->setCount(count);

                    goods[check_position] = Clothing;

                    cout << "Add more? (1-YES/0-NO)\n";
                    cin >> check;
                    if (check == 1)
                    {
                        check_position++;
                        continue;
                    }
                    else
                    {
                        check_position++;
                        break;
                    }
                    cout << endl << endl;
                }
                else
                {
                    cerr << "Array is full!" << endl;
                    break;
                }
            }
            break;

        case 3:
            for (int i = 0; i < check_position; i++)
            {
                cout << endl << endl;
                cout << "Name item: " << goods[i]->getName() << endl;
                cout << "Price item: " << goods[i]->getPrice() << endl;
                cout << "Count item: " << goods[i]->getCount() << endl << endl;
            }
            break;

        case 4:
            return 0;

        default:
            break;
        }
    } while (true);
}
