#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,n;
	cin>>t;
	while (t--)
	{
		cin>>n;
		if (n%2!=0)
			cout<<n<<'\n';
		else
		{
			int res=0;
			while (n)
			{
				res<<=1;
				res+=n&1;
				n>>=1;
			}
			cout<<res<<'\n';
		}
	}
	return 0;
}
