#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
	int t,res,i,max,n,tmp;
	cin>>t;
	while (t--)
	{
		cin>>n;
		cin>>max;
		res=1;
		for (i=1;i<n;i++)
		{
			cin>>tmp;
			if (tmp>max)
			{
				res++;
				max=tmp;
			}
		}
		cout<<res<<endl;
	}
    return 0;
}
