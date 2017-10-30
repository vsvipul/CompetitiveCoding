#include <bits/stdc++.h>
#define MOD 29009933
using namespace std;

int main()
{
	long long int t,n,i,tmp,res;
	cin>>t;
	while (t--)
	{
		cin>>n;
		cin>>res;
		for (i=1;i<n;i++)
		{
			cin>>tmp;
			res=(tmp*res)/__gcd(tmp,res);
		}
		cout<<res<<endl;
	}
	return 0;
}