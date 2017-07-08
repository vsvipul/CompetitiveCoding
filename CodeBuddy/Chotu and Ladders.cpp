#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,m,k,i,j,res;
	cin>>t;
	while (t--)
	{
		res=0;
		cin>>n>>m>>k;
		int a[n];
		int b[m];
		for (i=0;i<n;i++)
			cin>>a[i];
		for (i=0;i<m;i++)
			cin>>b[i];
		for (i=0;i<n;i++)
		{
			for (j=0;j<m;j++)
			{
				if (a[i]+b[j]>=k)
					res++;
			}
		}
		cout<<res<<endl;
	}    
    return 0;
}
