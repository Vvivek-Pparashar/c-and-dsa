#include<iostream>
using namespace std;

class bankdeposit
{
    int principle;
    int years;
    float rate;
    float returnvalue;

public:
    bankdeposit(){};
    bankdeposit(int p, int y, float r);
    bankdeposit(int p, int y, int r);
    void show();
};


bankdeposit :: bankdeposit(int p, int y, int r)
{
    principle=p;
    years=y;
    rate=r;
    returnvalue=principle;

    for(int i=0;i<y;i++)   returnvalue=returnvalue*(1+(rate/100));
}

bankdeposit :: bankdeposit(int p, int y, float r)
{
    principle=p;
    years=y;
    rate=r;
    returnvalue=principle;

    for(int i=0;i<y;i++)   returnvalue=returnvalue*(1+(rate));
}

void bankdeposit :: show()
{
    cout<<"Your principle was  ::  "<< principle
        <<"     Return value after  ::  "<<years<<" years"<<endl
        <<"is  ::  "                <<returnvalue    <<endl;
}

int main()
{
    bankdeposit b1, b2;
    int p, y;
    float r;
    int R;

    cout<<"Enter the value of p, y, and r ::  ";
    cin>>p>>y>>R;

    b1 = bankdeposit(p, y, R);
    b1.show();
}
