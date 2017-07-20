#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
	int mark[101];
	memset(mark,0,sizeof(mark));
	int i,n,min,max,tmp,f=0;
	cin>>n;
	cin>>tmp;
	mark[tmp]=1;
	min=max=tmp;
	for (i=1;i<n;i++)
	{
		cin>>tmp;
		if (tmp>max)
			max=tmp;
		if (tmp<min)
			min=tmp;
		mark[tmp]=1;
	}
	for (i=min;i<=max;i++)
	{
		if (!mark[i])
		{
			f=1;
			break;
		}
	}
	if (f)
		cout<<"NO\n";
	else
		cout<<"YES\n";
    return 0;
}
