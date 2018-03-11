#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i,j,n,d,tmp;
	cin>>n>>d;
	vector <int> v;
	for (i=0;i<n;i++)
	{
		cin>>tmp;
		v.push_back(tmp);
	}
	sort(v.begin(),v.end());
	int cur,res=0;
	for (i=0;i<n;i++)
	{
		cur=0;
		for (j=i;j<n;j++)
		{
			if (v[j]-v[i]<=d)
				cur++;
			else
				break;
		}
		res=max(res,cur);
	}
	cout<<n-res<<"\n";
	return 0;
}
