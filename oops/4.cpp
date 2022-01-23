#include <bits/stdc++.h>
using namespace std;

class employ
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "Enter the id of employee   ::   ";
        cin >> id;
        count++;
    }

    void getdata(void)
    {
        cout << "The id of your employ is   ::   " << id <<endl<<"and the number of this employee is  ::  " << count << endl;
    }

    static void getcount(void)
    {
        cout<<"The value of count is equal to   ::  "<<count<<endl<<endl;
    }
};

int employ ::count = 10000; // default value is 0;

int main()
{
    employ harry, vivek, shubham;
    harry.setdata();
    harry.getdata();
    employ::getcount();

    vivek.setdata();
    vivek.getdata();
    employ::getcount();

    shubham.setdata();
    shubham.getdata();
    employ::getcount();

    return 0;
}
