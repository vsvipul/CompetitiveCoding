#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	int t;
	ll n,x,y;
	cin>>t;
	while (t--)
	{
		cin>>n;
		y=n/65536;
		x=n-y*65536;
		cout<<x<<" "<<y<<"\n";
	}
}
