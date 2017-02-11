#include <bits/stdc++.h>
using namespace std;

int priority(char symbol)
{
    switch(symbol)
    {
        case '(': return 0;
        case '+':
        case '-': return 1;
        case '*':
        case '/': return 2;
        case '^': return 3;
        default : return 0;
    }
}

int main()
{
    char symbol;
    int t,i;
    cin>>t;
    string str;
    while (t--)
    {
        stack <char> stck;
        vector <char> v;
        cin>>str;
        for (i=0;i<str.length();i++)
        {
            symbol=str[i];
            switch (symbol)
            {
                case '(':
                {
                    stck.push(symbol);
                    break;
                }
                case ')':
                {
                    while (stck.top()!='(')
                    {
                        v.push_back(stck.top());
                        stck.pop();
                    }
                    stck.pop();
                    break;
                }
                case '+':
                case '-':
                case '*':
                case '/':
                case '^':
                {
                    while (!stck.empty() && priority(stck.top()>=priority(symbol)))
                    {
                        v.push_back(stck.top());
                        stck.pop();
                    }
                    stck.push(symbol);
                    break;
                }
                default: v.push_back(symbol);
            }
        }
        while (!stck.empty())
        {
            v.push_back(stck.top());
            stck.pop();
        }
        for (i=0;i<v.size();i++)
            cout<<v[i];
        cout<<'\n';
    }
    return 0;
}
