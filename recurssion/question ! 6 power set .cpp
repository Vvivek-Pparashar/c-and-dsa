#include<bits/stdc++.h>
using namespace std;

int total_subset=0;

void subset(vector<int> input, vector<int> output, int index)
{
    if(index>=input.size())
    {
        for(auto i : output)
        {
            cout<<i<<" ";
        }

        cout<<endl;
        total_subset++;
        return;
    }

    subset(input, output, index+1);

    output.push_back(input[index]);
    subset(input, output, index+1);
}

int main()

{
    int n;
    cin>>n;

    vector<int> input;
    vector<int> output;

    for(int i=1;i<=n;i++)
    {
        input.push_back(i);
    }

    subset(input, output, 0);

    cout<<"The total number of subset is equal to : "<<total_subset<<endl;
}
