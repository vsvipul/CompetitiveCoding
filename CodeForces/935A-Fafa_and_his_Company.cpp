#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,i;
	cin>>n;
	int res=0;
	for (i=1;i<n;i++)
	{
		if ((n-i)%i==0)
			res++;
	}
	cout<<res<<"\n";
	return 0;
}
