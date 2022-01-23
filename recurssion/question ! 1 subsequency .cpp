#include<bits/stdc++.h>
using namespace std;

void subsequence(string s, vector<char> output, int index)
{
    if(index == s.size())
    {
        for(auto i : output)
        {
            cout<<i<<" ";
        }

        cout<<endl;
        return;
    }

    subsequence(s, output, index+1);

    output.push_back(s[index]);
    subsequence(s, output, index+1);
}

int main()
{
    string s;
    cin>>s;

    vector<char> output;

    subsequence(s, output, 0);

}
