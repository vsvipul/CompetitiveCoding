#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,m;
    cin>>t;
    string s;
    while (t--)
    {
        m=0;
        cin>>s;
        for (i=0;i<s.length();i++)
        {
            if (s[i]=='(')
                m++;
            else if (s[i]==')')
                m--;
            if (m<0) break;
        }
        if (m==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
