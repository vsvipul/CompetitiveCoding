#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		int n,i,j,m;
		cin>>n>>m;
		int arr[n][4];
		for (i=0;i<n;i++)
		{
			arr[i][0]=m+1;
			arr[i][1]=m+1;
			arr[i][2]=m+1;
			arr[i][3]=m+1;
		}
		for (i=1;i<=n;i++)
		{
			arr[i-1][0]=(2*i)-1;
			arr[i-1][1]=2*(n+i)-1;
			arr[i-1][2]=2*(n+i);
			arr[i-1][3]=(2*i);
		}
		for (i=0;i<n;i++)
		{
			if (arr[i][1]<=m)
				cout<<arr[i][1]<<" ";
			if (arr[i][0]<=m)
				cout<<arr[i][0]<<" ";
			if (arr[i][2]<=m)
				cout<<arr[i][2]<<" ";
			if (arr[i][3]<=m)
				cout<<arr[i][3]<<" ";
		}
		cout<<endl;
	}
    return 0;
}
