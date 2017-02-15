#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll arr[200001];
ll temp[200001];

ll merge(ll arr[], ll temp[], ll l, ll mid, ll r)
{
    ll i,j,k;
    i=l;j=mid;k=l;
    ll inv=0;
    while (i<mid && j<=r)
    {
        if (arr[i]<=arr[j])
            temp[k++]=arr[i++];
        else
        {
            temp[k++]=arr[j++];
            inv+=(mid-i);
        }
    }
    while (i<mid)
        temp[k++]=arr[i++];
    while (j<=r)
        temp[k++]=arr[j++];
    for (i=l;i<=r;i++)
    {
    arr[i]=temp[i];
    }
    return inv;
}

ll mergesort(ll arr[], ll temp[], ll l, ll r)
{
    ll mid,inv=0;
    if (r>l)
    {
        mid=(l+r)/2;
        inv+=mergesort(arr,temp,l,mid);
        inv+=mergesort(arr,temp,mid+1,r);
        inv+=merge(arr,temp,l,mid+1,r);
    }
    return inv;
}

int main()
{
    ios_base::sync_with_stdio(false);
    ll t;
    cin>>t;
    while (t--)
    {
        ll n,i;
        cin>>n;
        for (i=0;i<n;i++)
            cin>>arr[i];
        cout<<mergesort(arr,temp,0,n-1)<<'\n';
    }
    return 0;
}
