#include<bits/stdc++.h>
using namespace std;

class student
{
protected:
    int roll_number;
public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void student :: set_roll_number(int r)
{
    roll_number=r;
}

void student :: get_roll_number(void)
{
    cout<<"Your roll number is  ::  "<<roll_number<<endl;
}





class exam : public student
{
protected:
    int maths;
    int physics;
public:
    void set_marks(int, int);
    void get_marks(void);
};

void exam :: set_marks(int m1, int m2)
{
    maths=m1;
    physics=m2;
}

void exam::get_marks(void)
{
    cout<<"The marks of roll number "<<roll_number<<" in maths is :: "<<maths<<endl;
    cout<<"The marks of roll number "<<roll_number<<" in physics is :: "<<physics<<endl;
}





class result : public exam
{
    float percentage;
public:
    void display()
    {
        get_roll_number();
        get_marks();
        cout<<"\nYour percentage is "<<float(maths+physics)/2<<"%"<<endl;
    }
};



int main()
{
    result vivek;
    vivek.set_roll_number(59);
    vivek.set_marks(100, 99);
    vivek.display();

}
