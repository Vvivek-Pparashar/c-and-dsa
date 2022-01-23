#include<bits/stdc++.h>
using namespace std;

int find(vector<int>  &v,int element)
{
    int lo=0,hi=6,count=-1,mid;

    while(hi-lo>=0)
    {
        mid=(hi+lo)/2;

        if(v[mid]>element)   hi=mid-1;

        else if(v[mid]<element)    lo=mid+1;

        else if(v[mid]==element)
        {
            count=mid;
            break;
        }

    }

    if(count!=-1)  return count+1;
    else if (v[lo]>element)  return lo;
    else if (v[hi]>element)  return hi;

    else  return -1;


}

int main()
{
    vector<int> v={1,4,7,23,78,80,81};

    int to_find;
    cin>>to_find;


    int c=find(v,to_find);
    if(c>=0 && c<v.size())   cout<<find(v,to_find)<<" "<<v[c];
    else  cout<<"No lower bound for this element ";


}
