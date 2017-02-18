#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;

ll modexpo(ll base, ll expo)
{
    ll res=1LL;
    while (expo>0)
    {
        if (expo%2==1)
        {
            res=(res*base)%mod;
        }
        base=(base*base)%mod;
        expo/=2;
    }
    return res;
}

ll hcf(ll a, ll b)
{
    if (a<b) swap(a,b);
    if (b!=0)
        return hcf(b,a%b);
    return a;
}

int main()
{
    int n,i;
    cin>>n;
    ll base,expo,temp;
    cin>>temp;
    base=temp;
    expo=temp;
    for (i=1;i<n;i++)
    {
        cin>>temp;
        base=((base%mod)*(temp%mod))%mod;
        expo=hcf(expo, temp);
    }
    cout<<modexpo(base,expo);
    return 0;
}
