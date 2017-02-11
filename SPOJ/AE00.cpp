#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int n,i,j;
    cin>>n;
    int res=0;
    if (n==1)   res=1;
    for (i=1;i<=n/2;i++)
    {
        for (j=i;i*j<=n;j++)
            res++;
    }
    cout<<res;
    return 0;
}
