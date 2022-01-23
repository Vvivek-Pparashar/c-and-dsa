#include<bits/stdc++.h>
using namespace std;

class binary{
    private:
        string s;
        void chk_bin(void);
    public:
       void read(void);
       void swap(void);
       void display(void);
};

void binary ::  read(void){
    cout<<"Enter a number  ::  ";
    cin>>s;
}

void binary :: chk_bin(void){
    for(int i=0;i<s.size();i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"Number is not binary ";
            exit(0);
        }
    }
}

void binary :: swap(void){

    chk_bin();
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0')  s[i]='1';
        else         s[i]='0';
    }
}

void binary :: display(void){
    cout<<endl<<"Displaying your number"<<endl;
    for(int i=0;i<s.size();i++)
    {
        cout<<s[i];
    }
}

int main()
{
    binary b;
    b.read();
  //    b.chk_bin();  //we use this in read so that we can use it as a private .....
    b.swap();
    b.display();
return 0;
}
