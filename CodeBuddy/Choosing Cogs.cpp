#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tofind,t,tmp,l,c,tl,n,i,res;
    cin>>t;
    while (t--)
    {
        cin>>l>>c>>tl>>n;
        tofind=(l*tl)/c;
        for (i=1;i<=n;i++)
        {
            cin>>tmp;
            if (tmp==tofind)
                res=i;
        }
        cout<<res<<endl;
    }
    return 0;
}
