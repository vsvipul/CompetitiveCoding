#include <bits/stdc++.h>
#define vi vector <int>
#define pb push_back
#define ll long long int
#define vl vector <ll>
#define fi cin.tie(NULL);ios_base::sync_with_stdio(false);
using namespace std;

int main()
{
	fi
	ll n,x,y,tmp,f=1;
	cin>>n>>x>>y;
	while (n--)
	{
		cin>>tmp;
		if (tmp<x || tmp>y)
			f=0;
	}
	if (f)
		cout<<"YES\n";
	else
		cout<<"NO\n";
    return 0;
}
