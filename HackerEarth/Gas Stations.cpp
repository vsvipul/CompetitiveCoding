#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,x,tmp;
	cin>>n>>x;
	int res=0;
	while (n--)
	{
		cin>>tmp;
		if (x>=0)
			res++;
		x-=tmp;
	}
	cout<<res<<endl;
    return 0;
}
