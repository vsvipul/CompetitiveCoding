#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll fnc(ll a, ll x, ll n)
{
	if (a>n || x<0 || x>9)
		return 0;
	ll res=1;
	res+=fnc(a*10+x,x,n);
	res+=fnc(a*10+x-1,x-1,n);
	res+=fnc(a*10+x+1,x+1,n);
	return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll t,res,i,n;
	cin>>t;
	while (t--)
	{
		res=1;
		cin>>n;
		for (i=1;i<10;i++)
			res+=fnc(i,i,n);
		cout<<res<<"\n";
	}
    return 0;
}
