#include <bits/stdc++.h>
using namespace std;

int fnc(int arr[], int n, int sum)
{
	int i,j,dp[sum+1];
	memset(dp,0,sizeof(dp));
	dp[0]=1;
	for (i=0;i<n;i++)
		for (j=arr[i];j<=sum;j++)
			dp[j]+=dp[j-arr[i]];
	return dp[sum];
}

int main()
{
	int t,n,i,sum;
	cin>>t;
	while (t--)
	{
		cin>>n>>sum;
		int arr[n];
		for (i=0;i<n;i++)
			cin>>arr[i];
		cout<<fnc(arr,n,sum)<<endl;
	}
    return 0;
}
