#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll hcf(ll a, ll b)
{
    if (a<b) swap(a,b);
    if (b==0)
        return a;
    return hcf(b,a%b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    ll k,i,j,c;
    ll n,res,tmp;
    scanf("%lld%lld",&n,&k);
    ll arr[k];
    res=n;
    for (i=0;i<k;i++)
    {
        scanf("%lld",&arr[i]);
    }
    for (i=0;i<(1<<k);i++)
    {
        tmp=1;c=0;
        for (j=0;j<k;j++)
        {
            if(arr[j]==1)
            {
                res=0;
                tmp=1;
                break;
            }
            if (i&(1<<j))
            {
                if (((double) n/tmp)<((double) arr[j]/hcf(arr[j],tmp)))
                {
                    tmp=1;
                    break;
                }
                tmp*=arr[j]/hcf(arr[j],tmp);;
                c++;
            }
        }
        if (tmp != 1)
        {
            if (c%2==1)
            {
                res-=n/tmp;
            }
            else
            {
                res+=n/tmp;
            }
        }
    }
    printf("%lld",res);
    return 0;
}
