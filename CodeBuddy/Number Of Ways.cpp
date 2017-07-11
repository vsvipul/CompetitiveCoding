#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

int dp[100001];
int fnc(int arr[], int n, int sum)
{
	int i,count=0;
	if (sum==0)
		return 1;
	if (dp[sum]!=-1)
		return dp[sum];
	for (i=0;i<n;i++)
	{
		if (sum>=arr[i])
			count=((count%mod)+(fnc(arr,n,sum-arr[i])%mod))%mod;
	}
	dp[sum]=count;
	return count;
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
		memset(dp,-1,sizeof(dp));
		cout<<fnc(arr,n,sum)<<endl;
	}
    return 0;
}
