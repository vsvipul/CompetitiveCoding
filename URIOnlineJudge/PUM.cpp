#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,i;
	cin>>n;
	for (i=1;i<=4*n;i++)
	{
		if (i%4==0)
			cout<<"PUM\n";
		else
			cout<<i<<" ";
	}
	return 0;
}
