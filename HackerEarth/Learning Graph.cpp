#include <bits/stdc++.h>
using namespace std;

bool comp( const pair<int,int> &a, const pair<int,int> &b)
{
	if (a.first!=b.first)
		return a.first>b.first;
	else
		return a.second>b.second;
}

int main()
{
	int n,e,k,a,b,i;
	cin>>n>>e>>k;
	k--;
	int val[n];
	for (i=0;i<n;i++)
		cin>>val[i];
	vector < pair<int,int> > v[n];
	vector < pair<int,int> >::iterator it;
	while (e--)
	{
		cin>>a>>b;
		a--;b--;
		v[a].push_back(make_pair(val[b],b));
		v[b].push_back(make_pair(val[a],a));
	}
	for (i=0;i<n;i++)
	{
		sort(v[i].begin(),v[i].end(),comp);
		if (k<v[i].size())
			cout<<(v[i][k].second)+1<<endl;
		else
			cout<<"-1\n";
	}
    return 0;
}
