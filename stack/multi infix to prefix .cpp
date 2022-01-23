#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define po pop_back
#define loop(i, a, b) for(int i=a; i<b; i++)
#define mp make_pair
#define vivek_is_great ios_base::sync_with_stdio(false) , cin.tie(NULL);
#define all(v) v.begin(),v.end()

int out_pre(char x)
{
    if(x == '+' || x == '-')  return 1;
    else if(x == '*' || x == '/') return 3;
    else if(x == '^' ) return 6;
    else if(x == '(') return 7;
}

int in_pre(char x)
{
    if(x == '+' || x == '-')  return 2;
    else if(x == '*' || x == '/') return 3;
    else if(x == '^' ) return 5;
    else if(x == '(') return 0;
}

int operand(char x)
{
    if(x == '+' || x == '-' || x == '*' || x == '/') return 0;
    else return 1;
}

void solver(string s)
{
    vector<char> out_char;
    stack<char> in_stack;

    int i = 0;

    while(i < s.size())
    {
        if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '(' ||  s[i] == '/' || s[i] == '^'){
            if(in_stack.empty()){
                in_stack.push(s[i++]);
            }else{
                if(out_pre(s[i]) > in_pre(in_stack.top())){
                    in_stack.push(s[i++]);
                }else{
                    out_char.pb(in_stack.top());
                    in_stack.pop();
                }
            }
        }else if(s[i] == ')'){
            if(in_stack.top() == '('){
                in_stack.pop();
                i++;
            }else{
                out_char.pb(in_stack.top());
                in_stack.pop();
            }
        }else{
            out_char.pb(s[i++]);
        }
    }

    while(!in_stack.empty())
    {
        out_char.pb(in_stack.top());
        in_stack.pop();
    }

    stack<int> final_result;

    i=0;

    while(i < out_char.size())
    {
        if(operand(out_char[i])){
            final_result.push(out_char[i++] - '0');
        }else{
            int x2 = final_result.top();
            final_result.pop();
            int x1 = final_result.top();
            final_result.pop();

            switch(out_char[i]){
                case '+':
                    final_result.push(x1+x2);
                    break;
                case '/':
                    final_result.push(x1/x2);
                    break;
                case '*':
                    final_result.push(x1*x2);
                    break;
                case '-':
                    final_result.push(x1-x2);
                    break;
            }
            i++;
        }
    }

    cout<<final_result.top();
}

int main()
{
    string s;  cin>>s;
    solver(s);
}
