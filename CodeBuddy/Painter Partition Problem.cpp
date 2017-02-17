#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll getmax(ll arr[], ll n)
{
    ll max=INT_MIN;
    ll i;
    for (i=0;i<n;i++)
    {
        if (arr[i]>max)
            max=arr[i];
    }
    return max;
}

ll getsum(ll arr[], ll n)
{
    ll sum=0;
    ll i;
    for (i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum;
}

ll getrp(ll arr[], ll n, ll maxlengthperpainter)
{
    ll i,total=0;
    ll noofpainters=1;
    for (i=0;i<n;i++)
    {
        total+=arr[i];
        if (total>maxlengthperpainter)
        {
            total=arr[i];
            noofpainters++;
        }
    }
    return noofpainters;
}

ll bsearch(ll arr[], ll n, ll k)
{
    ll mid,reqpainters;
    ll l=getmax(arr,n);
    ll r= getsum(arr,n);
    while (r-l>1)
    {
        mid=(l+r)/2;
        reqpainters=getrp(arr,n,mid);
        if (reqpainters<=k)
            r=mid;
        else
            l=mid+1;
    }
    reqpainters=getrp(arr,n,l);
    if (reqpainters<=k)
        return l;
    return r;
}

int main()
{
    ll t,res,n,k,tb,i;
    cin>>t;
    while (t--)
    {
        cin>>n>>k>>tb;
        ll arr[n];
        for (i=0;i<n;i++)
            cin>>arr[i];
        res=bsearch(arr,n,k);
        cout<<(res*tb)%10000003<<'\n';
    }
    return 0;
}
