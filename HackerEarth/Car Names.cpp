#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,f,n,i;
	char a,b,c;
	string str;
	cin>>t;
	while (t--)
	{
		cin>>str;
		n=str.length();
		a=str[0];
		b=str[n/3];
		c=str[2*n/3];
		if (n%3 || a==b || b==c || c==a)
		{
			cout<<"Not OK\n";
			continue;
		}
		f=0;
		for (i=0;i<n/3;i++)
		{
			if (str[i]!=a)
				f=1;
		}
		for (i=n/3;i<2*n/3;i++)
		{
			if (str[i]!=b)
				f=1;
		}
		for (i=2*n/3;i<n;i++)
		{
			if (str[i]!=c)
				f=1;
		}
		if (f)
			cout<<"Not OK\n";
		else
			cout<<"OK\n";
	}
    return 0;
}
