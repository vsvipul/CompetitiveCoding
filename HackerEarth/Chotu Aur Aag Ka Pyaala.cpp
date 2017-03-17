#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    ll res,n;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%lld",&n);
        res=((n-1)*(n-2))/2;
        printf("%lld\n",res);
    }
    return 0;
}
