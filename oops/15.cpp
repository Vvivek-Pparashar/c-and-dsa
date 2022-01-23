#include<iostream>
using namespace std;

int count=0;

class num
{
public:
    num()
    {
        count++;
        cout<<"invoke the constructor for :: "<<count<<endl;
    }

    ~num()
    {
        cout<<"invoke the distructor for :: "<<count<<endl;
        count--;
    }
};

int main()
{
    cout<<"Entering the main function"<<endl;
    cout<<"Creating 1st object n1"<<endl;

    num n1;
    {
        cout<<"Entering the block"<<endl;
        cout<<"Creating  object n2 & n3"<<endl;

        num n2, n3;

        cout<<"Exiting the block"<<endl;
    }

    cout<<"Back to main"<<endl;

}
