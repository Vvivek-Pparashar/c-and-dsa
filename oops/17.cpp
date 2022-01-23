#include<bits/stdc++.h>
using namespace std;

class employee
{
public:
    int id;
    float salery;
    employee(){};
    employee(int indd)
    {
        id=indd;
        salery=3;
    }
};

/*class {{derived-class-name}} : {{visiblity mode}} {{base class name}
{

};*/

class programmer : public employee
{
public:
    programmer(int indd)
    {
        id=indd;
    }
};

// private memeber is never gonna inherited
// visiblity mode means that if we inherite than our public class public or private
// default is private;

int main()
{
    employee vivek(13), parashar(14);
    cout<<vivek.salery<<endl;
    cout<<parashar.salery<<endl;

    programmer viv(3);
    cout<<viv.id;
}
