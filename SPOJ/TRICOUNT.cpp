#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int t,n,res;
	cin>>t;
	while (t--)
	{
		cin>>n;
		res=(n*(n+2)*(2*n+1))/8;
		cout<<res<<'\n';
	}
	return 0;
}
