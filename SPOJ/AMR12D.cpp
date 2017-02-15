#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int t,flag,i,n;
    string str;
    cin>>t;
    while (t--)
    {
        cin>>str;
        flag=0;
        n=str.length();
        for (i=0;i<=n/2;i++)
        {
            if (str[i]!=str[n-i-1])
                flag=1;
        }
        if (flag==1)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}
