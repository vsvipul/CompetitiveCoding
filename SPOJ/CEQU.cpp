#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,a,b,c,i;
	cin>>t;
	for (i=1;i<=t;i++)
	{
		cin>>a>>b>>c;
		if (c%__gcd(a,b)==0)
			cout<<"Case "<<i<<": Yes\n";
		else
			cout<<"Case "<<i<<": No\n";
	}
	return 0;
}
