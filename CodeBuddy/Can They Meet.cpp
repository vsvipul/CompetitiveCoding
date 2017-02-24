#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,c,d,i,ares,bres,q;
	string a,b;
	cin>>t;
	while (t--)
	{
		ares=0;bres=0;q=0;
		cin>>a>>b;
		c=a.size();
		d=b.size();
		for (i=0;i<c;i++)
		{
			if (a[i]=='+')
				ares++;
			else
				ares--;
		}
		for (i=0;i<d;i++)
		{
			if (b[i]=='+')
				bres++;
			else if (b[i]=='-')
				bres--;
			else
				q++;
		}
		int t=abs(ares-bres);
		if (t>q)
			cout<<"No\n";
		else if (t%2==q%2)
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
