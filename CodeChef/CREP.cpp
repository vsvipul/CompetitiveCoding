#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,k,i,tmp;
	cin>>t;
	while (t--)
	{
		cin>>n>>k;
		map <int,int> m;
		for (i=0;i<n;i++)
		{
			cin>>tmp;
			m[tmp]++;
		}
		long long int res=0,f=0;
		for (auto i:m)
		{
			if (i.second==k)
			{
				f=1;
				res+=i.first;
			}
		}	
		if (f)
			cout<<res<<endl;
		else
			cout<<"-1\n";
	}
	return 0;
} 
