#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Staks "<<endl;

    stack<int>  s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    int count =s.size();


    for(int i=0;i<count;i++)
    {
        cout<<"size"<<s.size()<<"  ";
        cout<<s.top()<<endl;
        s.pop();

    }


    cout<<endl<<"queue "<<endl;
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }

return 0;
}
