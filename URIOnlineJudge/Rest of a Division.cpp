#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x,y,i;
	cin>>x>>y;
	int mi=min(x,y);
	int ma=max(x,y);
	for (i=mi+1;i<ma;i++)
	{
		if (i%5==2 || i%5==3)
			cout<<i<<endl;
	}
    return 0;
}
