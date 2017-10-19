#include <bits/stdc++.h>
using namespace std;

int main()
{
	int x,y,i;
	cin>>x>>y;
	int mi=min(x,y);
	int ma=max(x,y);
	int res=0;
	for (i=mi+1;i<ma;i++)
	{
		if (i%2)
			res+=i;
	}
	cout<<res<<endl;
	return 0;
}
