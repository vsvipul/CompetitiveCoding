#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int t,a,b,reva,revb,revres,res;
    cin>>t;
    while (t--)
    {
        res=0;
        reva=0;
        revb=0;
        cin>>a>>b;
        while (a>0)
        {
            reva=(reva*10)+(a%10);
            a/=10;
        }
        while (b>0)
        {
            revb=(revb*10)+(b%10);
            b/=10;
        }
        revres=reva+revb;
        while (revres>0)
        {
            res=(res*10)+(revres%10);
            revres/=10;
        }
        cout<<res<<"\n";
    }
    return 0;
}
