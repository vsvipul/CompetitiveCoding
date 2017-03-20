#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll fnc( ll x)
{
	return (x/5)*6 + (x%5);
}

int main()
{
	ll t,x;
	cin>>t;
	while (t--)
	{
		cin>>x;
		cout<<fnc(x)<<"\n";
	}
    return 0;
}
