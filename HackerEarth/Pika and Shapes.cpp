#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	int n,c,i,x,a,b,d;
	cin>>c>>s;
	n=s.length();
	if (n==1)
		cout<<s;
	else if (c==1)
	{
		cout<<s<<"\n";
		i=1;
		while (i<n-1)
		{
			cout<<s[i];
			x=n-2;
			while (x--)
				cout<<" ";
			cout<<s[n-i-1]<<"\n";
			i++;
		}
		while (n--)
			cout<<s[n];
	}
	else if (c==2)
	{
		int space=n-1;
		int current=n-1;
		int mid=-1;
		x=n;
		while (x--)
		{
			for (i=0;i<space;i++)
				cout<<" ";
			cout<<s[current];
			if (current!=n-1)
			{	
				for (i=0;i<mid;i++)
					cout<<" ";
				cout<<s[current];
			}
			space--;
			current--;
			mid+=2;
			cout<<endl;
		}
		space=1;current=1;mid=2*n-5;x=n-1;
		while (x--)
		{
			for (i=0;i<space;i++)
				cout<<" ";
			cout<<s[current];
			if (current!=n-1)
			{	
				for (i=0;i<mid;i++)
					cout<<" ";
				cout<<s[current];
			}
			space++;
			current++;
			mid-=2;
			cout<<endl;
		}
	}	
}
