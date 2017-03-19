#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main()
{
    int t,res;
    ll n;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%lld",&n);
        res=0;
        while (n!=0)
        {
            if (1&n)
                res++;
            n>>=1;
        }
        printf("%d\n",res);
    }
}
