#include <bits/stdc++.h>
using namespace std;

int main()
{
	map <int, int> m;
	map <int, int>::iterator it,temp;
	int n,i,x,min;
	cin>>n;
	for (i=0;i<n;i++)
	{
		cin>>x;
		m[x]++;
	}
	for (i=0;i<m.size();i++)
	{
		min=INT_MAX;
		for (it=m.begin();it!=m.end();it++)
		{
			if (it->second<min)
			{
				min=it->second;
				temp=it;
			}
		}
		cout<<temp->first<<" ";
		temp->second=INT_MAX;
	}
    return 0;
}
