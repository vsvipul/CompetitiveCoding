#include <bits/stdc++.h>
#define vi vector <int>
#define pb push_back
#define ll long long int
#define vl vector <ll>
#define fi cin.tie(NULL);ios_base::sync_with_stdio(false);
using namespace std;

ll countBits(ll number)
{
      return (ll)log2(number)+1;
}

bool check(ll m, ll x)
{
	ll quo=x/m;
	if (countBits(quo)>countBits(m))
		return true;
	return false;
}

int main()
{
    fi
	int t;
	ll x;
	cin>>t;
	while (t--)
	{
		cin>>x;
		ll l=1,r=x;
		ll m=l+(r-l)/2;
		while (l<=r)
		{
			m=l+(r-l)/2;
			if (check(m,x) && !check(m+1,x))
				break;
			else if (check(m,x))
				l=m+1;
			else
				r=m-1;
		}
		cout<<x-m<<"\n";
	}
    return 0;
}
