#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define po pop_back
#define loop(i, a, b) for(int i=a; i<b; i++)
#define mp make_pair
#define vivek_is_great ios_base::sync_with_stdio(false) , cin.tie(NULL);
#define all(v) v.begin(),v.end()

//----------->  OUT_PRECEDENCE_CHECKER_FOR_POSTFIX  -----
int out_pre(char x)
{
    if(x == '+' || x == '-')  return 1;
    else if(x == '*' || x == '/') return 3;
    else if(x == '^' ) return 6;
    else if(x == '(') return 7;
}

//----------->  IN_PRECEDENCE_CHECKER_FOR_POSTFIX ------

int in_pre(char x)
{
    if(x == '+' || x == '-')  return 2;
    else if(x == '*' || x == '/') return 3;
    else if(x == '^' ) return 5;
    else if(x == '(') return 0;
}

//----------->  OPERAND_CHECKER  ------------------>

int operand(char x)
{
    if(x == '+' || x == '-' || x == '*' || x == '/') return 0;
    else return 1;
}

//----------->  MAIN_SOLVER  ---------------------->


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

    cout<<final_result.top()<<endl;
}

//----------->  PARENTHESIS CHECKER  <----------------//

int check_paren(string s)
{
    stack<int> checker;

    loop(i, 0, s.size())
    {
        if(s[i]=='(')  checker.push(s[i]);
        else if(s[i]==')')
        {
            if(!checker.empty()) checker.pop();
            else return 0;
        }
    }

    if(checker.empty()) return 1;
    else return 0;
}

//----------->  OPERATOR CHECKER  <----------------//

int Check_operator(string s)
{
    int n=s.size();
    if(s[0] == '*' || s[0] =='%' ||   s[0]=='^' ||   s[0]=='&' || s[0]=='+' || s[0]=='/' || s[n-1]=='*' ||
       s[n-1] =='%' || s[n-1]=='^'|| s[n-1]=='&' || s[n-1]=='+' || s[n-1]=='/')
    {
        //cout<<"1";
        return 0;
    }

    loop(i, 0, n)
    {
        if(s[i]=='*' || s[i]=='%' || s[i]=='^' || s[i]=='&' || s[i]=='+' || s[i]=='/' )
        {
            if(s[i+1]=='*' || s[i+1]=='%' || s[i+1]=='^' || s[i+1]=='&' || s[i+1]=='+' || s[i+1]=='/')
            {
                //cout<<"2";
                return 0;
            }
        }

        else if(s[i]=='(')
        {
            if(s[i+1]=='*' || s[i+1]=='%' || s[i+1]=='^' || s[i+1]=='&' || s[i+1]=='+' || s[i+1]=='/' || s[i-1] == '1' ||
            s[i-1] == '2' || s[i-1] == '3' || s[i-1] == '4' ||s[i-1] == '5' ||s[i-1] == '6' ||s[i-1] == '7' ||
            s[i-1] == '8' || s[i-1] == '9' || s[i-1] == '0' || s[i-1]==')')
            {
                //cout<<"3";
                return 0;
            }
        }

        else if(s[i]==')')
        {
            if(s[i-1] == '*' || s[i-1] == '%' || s[i-1] == '^' || s[i-1] == '&' || s[i-1] ==' +' || s[i-1] == '/' ||
               s[i+1] == '2' || s[i+1] == '3' || s[i+1] == '4' || s[i+1] == '5' || s[i+1] == '6' || s[i+1] == '7' ||
               s[i+1] == '8' || s[i+1] == '9' || s[i+1] == '0' || s[i+1] == '1' || s[i+1]=='(')
            {
               // cout<<"4";
                return 0;
            }
        }

    }

    return 1;
}

//----------->  RESULT  <----------------//

void result(string s)
{
    if(check_paren(s))  //------ "Parenthesis are balanced"
    {

        if(Check_operator(s)) //------- "Operator are balanced"
        {
            solver(s);
        }

        else cout<<"Operator are not balanced"<<endl;
    }

    else cout<<"Parenthesis are not balance"<<endl;
}

//----------->  MAIN CODE  <----------------//

int main()
{
    vivek_is_great  //  -------->   OH! THANKS, IT'S MY MIND WHICH MAKE ME GREAT    <---------

    string s;   cin>>s;
    result(s);
}
