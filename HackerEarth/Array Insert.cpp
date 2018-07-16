#include <bits/stdc++.h>
#define vi vector <int>
#define pb push_back
#define ll long long int
#define vl vector <ll>
#define fi cin.tie(NULL);ios_base::sync_with_stdio(false);
using namespace std;

int main()
{
	fi
	int n,q,i,tmp,a,b,c;
	cin>>n>>q;
	vi v;
	for (i=0;i<n;i++)
	{
		cin>>tmp;
		v.pb(tmp);
	}
	while (q--)
	{
		cin>>a>>b>>c;
		if (a==1)
		{
			v[b]=c;
		}
		else
		{
			ll sum=0;
			for (i=b;i<=c;i++)
			{
				sum+=v[i];
			}
			cout<<sum<<"\n";
		}
	}
    return 0;
}
