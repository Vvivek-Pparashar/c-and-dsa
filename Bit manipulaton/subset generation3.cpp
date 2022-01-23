#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > subsets(vector<int> &num)
{
    int n = num.size();
    int subset_ct = 1<<n;

    vector<vector<int> >subset;
    for(int mask=0; mask<subset_ct; ++mask)
    {
        vector<int> subsubset;
        for(int i=0; i<n; i++)
        {
            if(mask & 1<<i) subsubset.push_back(num[i]);
        }

        subset.push_back(subsubset);
    }

    return subset;
}

int main()
{
    int n;
    cin>>n;

    vector<int> v(n);

    for(int i=0; i<n; ++i)  cin>>v[i];

    auto all_subset = subsets(v);

    for(auto subset : all_subset)
    {
        for(int ele : subset)
        {
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}
