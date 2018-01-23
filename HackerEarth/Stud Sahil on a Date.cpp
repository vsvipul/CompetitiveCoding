#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t,n,i;
	cin>>t;
	while (t--)
	{
		cin>>n;
		ll arr[n];
		map <ll,ll> m;
		m[0]=0;
		m[1]=0;
		m[2]=0;
		m[3]=0;
		m[4]=0;
		for (i=0;i<n;i++)
		{
			cin>>arr[i];
			m[arr[i]%5]++;
		}
		ll res=((m[0]*(m[0]-1))/2) + (m[1]*m[4]) + (m[2]*m[3]);
		cout<<res<<endl;
	}
	return 0;
}
