#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	long long int maxrow=0,maxcol=0,sum,i,j,n,m,v1,v2,v3,v4;
	cin>>n>>m;
	int arr[n][m];
	long long int row[n]={0};
	long long int col[m]={0};
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			cin>>arr[i][j];
			row[i]+=abs(arr[i][j]);
			col[j]+=abs(arr[i][j]);
		}
	}
	cin>>v1>>v2>>v3>>v4;
	for (i=0;i<n;i++)
	{
		sum=0;
		for (j=0;j<m;j++)
		{
			sum+=abs(arr[i][j]+v1);
		}
		maxrow+=max(row[i],max(sum,abs(m*v2)));
	}
	for (i=0;i<m;i++)
	{
		sum=0;
		for (j=0;j<n;j++)
		{
			sum+=abs(arr[j][i]+v3);
		}
		maxcol+=max(col[i],max(sum,abs(n*v4)));
	}
	cout<<max(maxrow,maxcol)<<endl;
    return 0;
}
