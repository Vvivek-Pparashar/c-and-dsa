#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={1,2,3,4,5,6,7};

    int to_find;
    cin>>to_find;

    int lo=0,hi=6;
    int mid;
    int count =-1;

    while(hi-lo>=0)
    {
        mid=(hi+lo)/2;
        if(v[mid]>to_find)
        {
            hi=mid-1;
        }

        else if(v[mid]<to_find)
        {
            lo=mid+1;
        }

        else if(v[mid]==to_find)
        {
            count=mid;
            break;
        }

    }
    if(count!=-1)  cout<<count;
    else  cout<<"Not found";

    return 0;

}
