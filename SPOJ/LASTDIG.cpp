#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int t,a,b,i,res;
    cin>>t;
    while (t--)
    {
        cin>>a>>b;
        if (b==0)
        {
            res=1;
        }
        else if (b%4==0)
        {
            b=4;
            res=1;
            for (i=0;i<b;i++)
            {
                res*=a;
            }
            res%=10;
        }
        else
        {
            b%=4;
            res=1;
            for (i=0;i<b;i++)
            {
                res*=a;
            }
            res%=10;
        }
        cout<<res<<'\n';
    }
    return 0;
}
