#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i,n,m,tmp,res;
	while (1)
	{
		cin>>n>>m;
		if (n==0 && m==0)
			break;
		res=0;
		set <int> a,b,c;
		set <int>::iterator it;
		for (i=0;i<n;i++)
		{
			cin>>tmp;
			a.insert(tmp);
		}
		for (i=0;i<m;i++)
		{
			cin>>tmp;
			b.insert(tmp);
		}
		for (it=a.begin();it!=a.end();it++)
		{
			if (b.find(*it)!=b.end())
				c.insert(*it);
		}
		cout<<min(a.size()-c.size(),b.size()-c.size())<<endl;
	}
	return 0;
}
