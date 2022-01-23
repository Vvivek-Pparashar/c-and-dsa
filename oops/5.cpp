#include <bits/stdc++.h>
using namespace std;

class employee
{
    int id;
    int salery;

public:
    void setdata(void)
    {
        salery=1444;
        cout << "Enter the id of employee  ::  ";
        cin >> id;
    }

    void getdata(void)
    {
        cout << "The id of employee is  ::  " << id << endl<<endl;
    }
};

int main()
{
   employee fb[6];
   for ( int i = 0; i < 6; i++)
   {
       fb[i].setdata();
       fb[i].getdata();
   }
}
