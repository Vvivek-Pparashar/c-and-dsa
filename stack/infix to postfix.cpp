#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define po pop_back
#define loop(i, a, b) for(int i=a; i<b; i++)
#define mp make_pair
#define vivek_is_great ios_base::sync_with_stdio(false) , cin.tie(NULL);
#define all(v) v.begin(),v.end()

int operand(char x)
{
    if(x == '+' || x == '-' || x == '*' || x == '/') return 0;
    else return 1;
}

int pre(char x)
{
    if(x == '+' || x == '-' ) return 1;
    else if(x == '*' || x == '/') return 2;
    return 0;
}

void convert(string s)
{
    stack<char> in;
    vector<char> a;

    int i = 0, j = 0;

    while(i<s.size()){
        if(operand(s[i])){
            a.pb(s[i++]);
        }else{
            if(in.empty()){
                in.push(s[i++]);
            }else{
                if(pre(s[i]) > pre(in.top())){
                    in.push(s[i++]);
                }else{
                    a.pb(in.top());
                    in.pop();
                }
            }
        }
    }

    while(in.size())
    {
        int v = in.top();
        a.pb(v);
        in.pop();
    }

    for(auto it : a) cout<<it<<"";
}

int main()
{
    string s;  cin>>s;
    convert(s);
}

