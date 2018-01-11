#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll modexp(ll x, ll n, ll m)
{
	ll res=1;
	while (n>0)
	{
		if (n%2)
			res=((res%m)*(x%m))%m;
		x=((x%m)*(x%m))%m;
		n/=2;
	}
	return res;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	ll n;
	cin>>t;
	while (t--)
	{
		cin>>n;
		cout<<modexp(2,n,1000000007)-1<<"\n";
	}
	return 0;
}
