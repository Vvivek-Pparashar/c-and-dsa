#include<iostream>
using namespace std;


class bankdeposit{
    int principal;
    int years;
    float interestRate;
    float returnValue;

    public:
        bankdeposit(){}
        bankdeposit(int p, int y, float r); // r can be a value like 0.04
        bankdeposit(int p, int y, int r); // r can be a value like 14
        void show();
};

bankdeposit :: bankdeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+interestRate);
    }
}

bankdeposit :: bankdeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r)/100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+interestRate);
    }
}

void bankdeposit :: show(){
    cout<<endl<<"Principal amount was "<<principal
        << ". Return value after "<<years
        << " years is "<<returnValue<<endl;
}


int main(){
    bankdeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;


    cout<<"Enter the value of p y and r"<<endl;
    cin>>p>>y>>r;
    bd1 = bankdeposit(p, y, r);
    bd1.show();

    cout<<"Enter the value of p y and R"<<endl;
    cin>>p>>y>>R;
    bd2 = bankdeposit(p, y, R);
    bd2.show();
    return 0;
}

