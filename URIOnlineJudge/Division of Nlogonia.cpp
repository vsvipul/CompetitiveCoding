#include <bits/stdc++.h>
#define PI 3.14159
using namespace std;

int main()
{
	int t,a,b;
	while (1)
	{
		cin>>t;
		if (t==0)
			break;
		int n,m;
		cin>>n>>m;
		while (t--)
		{
			cin>>a>>b;
			if (a>n && b>m)
				cout<<"NE\n";
			else if (a>n && b<m)
				cout<<"SE\n";
			else if (a<n && b>m)
				cout<<"NO\n";
			else if (a<n && b<m)
				cout<<"SO\n";
			else if (a==n || b==m)
				cout<<"divisa\n";
		}
	}
	return 0;
}
