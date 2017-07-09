#include <bits/stdc++.h>
using namespace std;

int knapsack(int k, int wt[], int val[], int n)
{
	int i,j,arr[n+1][k+1];
	for (i=0;i<=n;i++)
	{
		for (j=0;j<=k;j++)
		{
			if (i==0||j==0)
				arr[i][j]=0;
			else if (wt[i-1]<=j)
				arr[i][j]=max(val[i-1] + arr[i-1][j-wt[i-1]], arr[i-1][j]);
			else
				arr[i][j]=arr[i-1][j];
		}
	}
	return arr[n][k];
}

int main()
{
	int n,s,i;
	cin>>s>>n;
	int val[n],wt[n];
	for (i=0;i<n;i++)
		cin>>wt[i]>>val[i];
	cout<<knapsack(s,wt,val,n);
	return 0;
}
