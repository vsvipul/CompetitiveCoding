#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll check(int mid, int k)
{
	ll i,res=mid;
	for (i=k;(mid/i)!=0;i*=k)
	{
		res+=mid/i;
	}
	return res;
}

int main()
{
	ios_base::sync_with_stdio(false);
    ll t,n,k,l,r,res,mid;
    cin>>t;
    while (t--)
    {
    	cin>>n>>k;
    	l=1;
    	r=n;
    	while (r-l>1)
    	{
    		mid=(l+r)/2;
    		if (check(mid,k)>=n)
    			r=mid;
    		else
    			l=mid+1;

    	}
    	if (check(l,k)>=n)
    		res=l;
    	else
    		res=r;
    	cout<<res<<'\n';
    }
    return 0;
}
