#include <bits/stdc++.h>
using namespace std;

int sumf(int n)
{
	int i,res=0;
	for (i=1;i<n;i++)
	{
		if (n%i==0)
			res+=i;
	}
	return res;
}

int main()
{
	int t,n;
	cin>>t;
	while (t--)
	{
		cin>>n;
		cout<<sumf(n)<<endl;
	}
	return 0;
}
