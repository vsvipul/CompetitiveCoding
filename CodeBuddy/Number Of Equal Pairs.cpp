#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int i,n,count=1,res=0;
	cin>>n;
	long long int arr[n];
	for (i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	for (i=1;i<n;i++)
	{
		if (arr[i]==arr[i-1])
			count++;
		else if (arr[i]!=arr[i-1])
		{
			res+=(count*(count-1))/2;
			count=1;
		}
	}
	res+=(count*(count-1))/2;
	cout<<res;
	return 0;
}
