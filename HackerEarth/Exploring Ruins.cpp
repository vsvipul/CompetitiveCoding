#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    string str;
    cin>>str;
    int i;
    for (i=0;i<str.length();i++)
    {
        if (str[i]=='?')
        {
            if (i==0)
            {
                if (str[i+1]!='a')
                    str[i]='a';
                else
                    str[i]='b';
            }
            else
            {
                if (str[i-1]!='a'&&str[i+1]!='a')
                    str[i]='a';
                else
                    str[i]='b';
            }
        }
    }
    cout<<str;
    return 0;
}
