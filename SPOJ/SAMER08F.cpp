#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int n,i,res;
    while (1)
    {
        res=0;
        cin>>n;
        if (n==0)
            break;
        for (i=1;i<=n;i++)
        {
           res+=i*i;
        }
        cout<<res<<'\n';
    }
    return 0;
}
