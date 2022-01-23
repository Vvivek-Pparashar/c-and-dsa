#include<bits/stdc++.h>
using namespace std;

void print(int n)
{
    if(n<=0) return ;
    cout<<n<<" ";  //  head h ye because ye return karne se phale call hoga

    print(n-1);
    cout<<n<<" "; //  ye tail h ye retrun honw k baad call hoga when recursion popcout kar reha hoga

}

int main()
{
    int n;
    cin>>n;

    print(n);
}
