#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long int t,n,i,res;
	cin>>t;
	while (t--)
	{
		cin>>n;
		res=0;
		for (i=5;n/i>0;i*=5)
			res+=n/i;
		cout<<res<<"\n";
	}
	return 0;
}
