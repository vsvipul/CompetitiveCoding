#include <bits/stdc++.h>
using namespace std;

bool check(string str)
{
    int i;
    int n=str.length();
    for (i=0;i<n;i++)
    {
        if (str[i]!=str[n-i-1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,i,j,res;
    string str,temp;
    cin>>t;
    while (t--)
    {
        res=0;
        cin>>str;
        n=str.length();
        for (i=0;i<(1<<n);i++)
        {
            temp="";
            for (j=0;j<n;j++)
            {
                if (i & (1<<j))
                {
                    temp+=str[j];
                }
            }
            if (check(temp))
                res++;
        }
        cout<<res<<'\n';
    }
    return 0;
}
