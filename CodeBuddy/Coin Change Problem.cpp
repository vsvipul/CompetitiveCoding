#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll cc(ll arr[], ll sum[], ll n, ll s)
{
	if (s==0)
    {
        sum[s]=0;
        return 0;
    }
    if (sum[s]!=-1)
        return sum[s];
    ll i,res=INT_MAX;
    for (i=0;i<n;i++)
    {
        if (arr[i]<=s)
        	res=min(res,1+cc(arr,sum,n,s-arr[i]));
    }
    sum[s]=res;
    return res;
}

ll coin(ll arr[], ll n, ll s)
{
    ll i,sum[100005];
    memset(sum,-1,sizeof(sum));
    sum[0]=0;
    return cc(arr,sum,n,s);
}

int main()
{
    ll t,i,n,s,res,arr[12];
    cin>>t;
    while (t--)
    {
        cin>>n>>s;
        for (i=0;i<n;i++)
            cin>>arr[i];
        res=coin(arr,n,s);
        if (res!=INT_MAX)
        	cout<<res<<endl;
        else
        	cout<<-1<<endl;
    }
    return 0;
}
