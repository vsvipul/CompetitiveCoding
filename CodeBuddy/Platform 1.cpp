#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,i,tmp,maxn,maxp;
	cin>>t;
	while (t--)
	{
		maxn=0;maxp=0;
		cin>>n;
		for (i=0;i<n;i++)
		{
			cin>>tmp;
			if (tmp>0)
			{
				if (tmp>maxp)
					maxp=tmp;
			}
			else
			{
				if (tmp<maxn)
					maxn=tmp;
			}
		}
		cout<<-1000-maxn<<" "<<1000-maxp<<endl;
	}
    return 0;
}
