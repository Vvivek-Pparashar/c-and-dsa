#include <bits/stdc++.h>
using namespace std;

class shop
{
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void setprice(void);
    void displayprice(void);
};

void shop ::setprice(void)
{
    cout << "Enter the id of your item no  " << counter + 1 << endl;
    cin >> itemid[counter];

    cout << "Enter the price of your item no  " << counter + 1 << endl;
    cin >> itemprice[counter];

    counter++;
}

void shop ::displayprice(void)
{
    for (int i = 0; i < counter; i++)    cout << "The price of item with id  " << itemid[i] << " is " << itemprice[i] << endl;
}

int main()
{
    shop dukan;
    dukan.initcounter();
    dukan.setprice();
    dukan.displayprice();
}
