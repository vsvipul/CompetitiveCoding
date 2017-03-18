#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int prime[12]={2,3,5,7,11,13,17,19,23,29,31,37};

ll fastmult(ll a, ll b, ll mod)
{
    ll res=0;
    ll i;
    while (b>0)
    {
        if (b%2==1)
            res=((res%mod)+(a%mod))%mod;
        a=((a%mod)+(a%mod))%mod;
        b/=2;
    }
    return res;
}

ll power(ll base, ll exp, ll mod)
{
    ll res=1LL;
    while (exp>0)
    {
        if (exp%2==1)
        {
            res=fastmult(res,base,mod);
        }
        base=fastmult(base,base,mod);
        exp/=2;
    }
    return res;
}

bool millertest(ll p,ll n,ll s)
{
    ll x=power(p,s,n);
    if(x==1||x==n-1)
        return true;
    while(s!=n-1)
    {
        x=fastmult(x,x,n);
        s*=2;
        if(x==1)    
            return false;
        if(x==n-1)  
            return true;
    }
    return false;
}

bool millerrabin(ll n)
{
    ll i,s;
    if (n <= 1 || n == 4)  return false;
    if (n <= 3) return true;
    if (n%2==0) return false;
    s=n-1;
    while(s%2==0) 
        s/=2;
    for(i=0;i<12 && prime[i]<n;i++)
    {
        if (!millertest(prime[i],n,s))
            return false;
    }
    return true;
}

int main() 
{
    int t;
    ll n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(millerrabin(n))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
