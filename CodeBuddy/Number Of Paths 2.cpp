#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

int n,m,dp[2001][2001];

int path(int x, int y)
{
	if (x<0||y<0)
		return 0;
	if (dp[x][y]!=-1)
		return dp[x][y];
	dp[x][y]=(path(x,y-1)%mod+path(x-1,y)%mod)%mod;
	return dp[x][y];
}

int main()
{
  ios_base::sync_with_stdio(false);
  int t,k,a,b,i;
	scanf("%d",&t);
	while (t--)
	{
		scanf("%d%d%d",&n,&m,&k);
		memset(dp,-1,sizeof(dp));
		while (k--)
		{
			scanf("%d%d",&a,&b);
			dp[a-1][b-1]=0;
		}
		for (i=0;i<n;i++)
		{
			if (dp[i][0]!=0)
				dp[i][0]=1;
			else
				break;
		}
		for (i=0;i<n;i++)
		{
			if (dp[0][i]!=0)
				dp[0][i]=1;
			else
				break;
		}
		printf("%d\n",path(n-1,m-1));
	}
  return 0;
}
