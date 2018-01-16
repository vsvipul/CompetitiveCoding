#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int i,n;
	cin>>n;
	int a[n];
	int max=0,cnt=0;
	bool neg=false;
	for (i=0;i<n;i++)
		cin>>a[i];
	for (i=0;i<n;i++)
	{
		if (a[i]==0)
		{
			cnt=0;
			neg=false;
		}
		else
		{
			if (a[i]<0)
				neg=!neg;
			cnt++;
			if (cnt>max && !neg)
				max=cnt;
		}
	}
	cnt=0,neg=false;
	for (i=n-1;i>=0;i--)
	{
		if (a[i]==0)
		{
			cnt=0;
			neg=false;
		}
		else
		{
			if (a[i]<0)
				neg=!neg;
			cnt++;
			if (cnt>max && !neg)
				max=cnt;
		}
	}	
	cout<<max<<"\n";
	return 0;
}
