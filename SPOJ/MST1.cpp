#include <bits/stdc++.h>
using namespace std;

int dp[20000005];
int fnc(int n)
{
	if (n==1) return 0;
	if (dp[n]!=-1)
		return dp[n];
	int x=1+fnc(n-1);
	if (n%2==0) x=min(x, 1+fnc(n/2));
	if (n%3==0) x=min(x, 1+fnc(n/3));
	dp[n]=x;
	return x;
}

int main()
{
	memset(dp,-1,sizeof(dp));
	int t,n,steps,i;
	cin>>t;
	for (i=1;i<=t;i++)
	{
		cin>>n;
		cout<<"Case "<<i<<": "<<fnc(n)<<endl;
	}    
    return 0;
}
