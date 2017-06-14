#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

int n,m,dp[2001][2001];

int path(int x, int y)
{
	if (dp[x][y]!=-1)
		return dp[x][y];
	if (x==0||y==0)
	{
		dp[x][y]=1;
		return 1;
	}
	dp[x][y]=((path(x-1,y))%mod+(path(x,y-1))%mod)%mod;
	return dp[x][y];
}

int main()
{
  ios_base::sync_with_stdio(false);
  int t,n,m;
  scanf("%d",&t);
	while (t--)
	{
		memset(dp,-1,sizeof(dp));
		scanf("%d%d",&n,&m);
		printf("%d\n",path(n-1,m-1));
	}
  return 0;
}
