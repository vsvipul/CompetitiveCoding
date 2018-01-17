#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,i,j,n;
	cin>>t;
	while (t--)
	{
		cin>>n;
		long long int arr[n][n];
		for (i=0;i<n;i++)
		{
			for (j=0;j<n;j++)
			{
				cin>>arr[i][j];
			}
			sort(arr[i],arr[i]+n);
		}
		long long int res=arr[n-1][n-1];
		long long int prev=arr[n-1][n-1];
		int f=0;
		for (i=n-2;i>=0;i--)
		{
			if (arr[i][0]>=prev)
			{
				f=1;
				break;
			}
			for (j=n-1;j>=0;j--)
			{
				if (arr[i][j]<prev)
				{
					res+=arr[i][j];
					prev=arr[i][j];
					break;
				}
			}
		}
		if (f)
			cout<<"-1\n";
		else
			cout<<res<<"\n";
	}
	return 0;
} 
