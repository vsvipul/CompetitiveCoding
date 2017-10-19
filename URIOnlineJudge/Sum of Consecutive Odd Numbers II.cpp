#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,x,y;
	cin>>t;
	while (t--)
	{
		cin>>x>>y;
		int mi=min(x,y);
		int ma=max(x,y);
		int i,res=0;
		for (i=mi+1;i<ma;i++)
		{
			if (i%2)
				res+=i;
		}
		cout<<res<<endl;
	}
	return 0;
}
