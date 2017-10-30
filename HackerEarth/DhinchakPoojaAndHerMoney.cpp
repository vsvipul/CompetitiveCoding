#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,i;
	long long int res,a,b;
	cin>>t;
	while (t--)
	{
		res=0;
		cin>>n;
		for (i=0;i<n;i++)
		{
			cin>>a>>b;
			res+=a*b;
		}
		cout<<res<<endl;
	}
	return 0;
}