#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,i;
	long long int res;
	cin>>t;
	while (t--)
	{
		res=0;
		cin>>n;
		int men[n];
		int wmen[n];
		for (i=0;i<n;i++) cin>>men[i];
		for (i=0;i<n;i++) cin>>wmen[i];
		sort(men, men+n);
		sort(wmen, wmen+n);
		for (i=0;i<n;i++) res+=men[i]*wmen[i];
		cout<<res<<'\n';
	}
	return 0;
}
