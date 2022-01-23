#include<bits/stdc++.h>
using namespace std;

class student
{
protected:
    int roll_no;
public:
    void set_roll(int a)
    {
        roll_no=a;
    }

    void get_roll()
    {
        cout<<"Your roll number is  ::  "<<roll_no<<endl;
    }
};

class test : virtual public student
{
protected:
    int math, phy;
public:
    void set_number(int a, int b)
    {
        math=a;
        phy=b;
    }

    void get_number()
    {
        cout<<"Your result is "<<endl
            <<"Your marks in math is :: "<<math<<endl
            <<"Your marks in phy is :: "<<phy<<endl;
    }
};

class sports : virtual public student
{
protected:
    int sport;
public:
    void set_sport(int a)
    {
        sport=a;
    }

    void get_sport()
    {
        cout<<"Your marks in sports is :: "<<sport<<endl;
    }
};

class result : public test, public sports
{
public:
    void final_result()
    {
        get_roll();
        get_number();
        get_sport();
        cout<<"Your total marks in all subject is :: "<<math+phy+sport<<endl;
    }

};
int main()
{
   result vivek;
   vivek.set_roll(59);
   vivek.set_number(99, 100);
   vivek.set_sport(99);
   vivek.final_result();
}
