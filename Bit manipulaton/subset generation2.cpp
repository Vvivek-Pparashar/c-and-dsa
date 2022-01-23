#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> masks;

    for(int i=0;i<n;++i)
    {
        int working_day;
        cin>>working_day;

        int mask=0;

        for(int j=0; j<working_day; ++j)
        {
            int day;
            cin>>day;

            mask |= 1<<day;
        }

        masks.push_back(mask);
    }

    int first=-1, second=-1, max=0;


    for(int i=0;i<n;i++)
    {
        for(int j=i+1; j<n; ++j)
        {
            int intersection = masks[i] & masks[j];
            int count=__builtin_popcount(intersection);
            if(count>max)
            {
                max=count;
                first=i;
                second=j;
            }
        }
    }
    cout<<first<<" "<<second<<"   "<<max<<endl;
}
