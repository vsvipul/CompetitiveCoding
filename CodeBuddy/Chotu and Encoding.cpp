#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,x;
	string str;
	cin>>t;
	while (t--)
	{
		cin>>str;
		n=str.length();
		x=n-2;
		while (x>=0)
		{
			cout<<str[x];
			x-=2;
		}
		if (n%2)
			x=0;
		else
			x=1;
		while (x<n)
		{
			cout<<str[x];
			x+=2;
		}
		cout<<endl;
	}	
    return 0;
}
