#include <bits/stdc++.h>
using namespace std;

int main() 
{
	std::ios::sync_with_stdio(false);
	int t;
	long long int n,ans,res;
	cin>>t;
	while (t--)
	{
		cin>>n;
		res=0;
		while (n)
		{
			if ((n&1LL)==0)
				res++;
			n=n>>1;
		}	
		ans=(long long int) (1LL<<res);
		cout<<ans<<endl;
	}
	return 0;
}
