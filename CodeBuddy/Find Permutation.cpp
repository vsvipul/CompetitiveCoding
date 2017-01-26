#include <bits/stdc++.h>
using namespace std;

int main() 
{
	std::ios::sync_with_stdio(false);
	long long int res=0;
	int i,j,n;
	cin>>n;
	int arr[n];
	int ans[n];
	for (i=0;i<n;i++)
		cin>>arr[i];
	sort(arr,arr+n);
	if (n%2==1)
	{
		j=0;
		for (i=0;i<=n/2;i++)
		{
			ans[j]=arr[i];
			j+=2;
		}
		j=1;
		for (i=n-1;i>n/2;i--)
		{
			ans[j]=arr[i];
			j+=2;
		}
		for (i=1;i<n;i++)
		{
			res+=abs(ans[i]-ans[i-1]);
		}
	}
	else
	{
		j=0;
		for (i=0;i<n/2;i++)
		{
			ans[j]=arr[i];
			j+=2;
		}
		j=1;
		for (i=n-1;i>=n/2;i--)
		{
			ans[j]=arr[i];
			j+=2;
		}
		for (i=1;i<n;i++)
		{
			res+=abs(ans[i]-ans[i-1]);
		}
	}
	cout<<res<<endl;
	return 0;
}
