#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,i,flag;
    string str;
    cin>>t;
    while (t--)
    {
        cin>>str;
        n=str.length();
        flag=0;
        for (i=0;i<=n/2;i++)
        {
            if (str[i]!=str[n-i-1])
                flag=1;
        }
        if (flag==1)
            cout<<"losses\n";
        else
            cout<<"wins\n";
    }
    return 0;
}
