#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    ll a,b,c;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%lld %lld %lld",&a,&b,&c);
        printf("%lld\n",a*a-2*b);
    }
    return 0;
}
