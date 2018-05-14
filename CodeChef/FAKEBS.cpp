#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll fakebs(ll x, map <ll,ll> &m, map <ll,ll> &ms, ll arr[], ll n)
{
	ll pos=m[x];
	ll l=0,r=n-1,mid,cl=0,cr=0,tl=0,tr=0;
	while (l<r)
	{
		mid=(l+r)/2;
		if (mid==pos)
			break;
		else if (mid<pos)
		{
			l=mid+1;
			tl++;
			if (arr[mid]>x)
				cl++;
		}
		else
		{
			r=mid-1;
			tr++;
			if (arr[mid]<x)
				cr++;
		}
	}
	l=ms[x];
	r=n-ms[x]-1;
	if (tl>l || tr>r)
		return -1;
	return max(cl,cr);
} 

int main()
{
	ll p,r,t,n,q,k;
	int i;
	cin>>t;
	while (t--)
	{
		cin>>n>>q;
		ll arr[n+5],sarr[n+5];
		map <ll,ll> m,ms;
		for (i=0;i<n;i++)
		{
			cin>>arr[i];
			sarr[i]=arr[i];
			m[arr[i]]=i;
		}
		sort(sarr,sarr+n);
		for (i=0;i<n;i++)
			ms[sarr[i]]=i;
		while (q--)
		{
			cin>>k;
			cout<<fakebs(k,m,ms,arr,n)<<"\n";	
		}
	}
    return 0;
}
