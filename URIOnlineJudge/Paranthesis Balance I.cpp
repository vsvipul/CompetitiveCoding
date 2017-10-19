#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,m;
    string s;
    while (cin>>s)
    {
        m=0;
        for (i=0;i<s.length();i++)
        {
            if (s[i]=='(')
                m++;
            else if (s[i]==')')
                m--;
            if (m<0) break;
        }
        if (m==0)
            cout<<"correct"<<endl;
        else
            cout<<"incorrect"<<endl;
    }
    return 0;
}