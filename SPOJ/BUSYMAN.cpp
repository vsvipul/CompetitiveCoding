#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,i,n,startt,endt;
	cin>>t;
	while (t--)
	{
		vector < pair<int,int> > v;
		cin>>n;
		for (i=0;i<n;i++)
		{
			cin>>startt>>endt;
			v.push_back(make_pair(endt,startt));
		}
		sort(v.begin(),v.end());
		int res=1,temp=v[0].first;
		for (i=1;i<n;i++)
		{
			if (temp<=v[i].second)
			{
				res++;
				temp=v[i].first;
			}
		}
		cout<<res<<'\n';
	}
	return 0;
}
