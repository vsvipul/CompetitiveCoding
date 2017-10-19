#include <bits/stdc++.h>
#define PI 3.14159
using namespace std;

int main()
{
	int n,m,i,j;
	while (1)
	{
		cin>>n>>m;
		if (n==0 && m==0)
			break;
		int a=1,b=1,c=1,d=1,pro,sum,res=0;
		int arr[n][m];
		for (i=0;i<n;i++)
		{
			pro=1;
			sum=0;
			for (j=0;j<m;j++)
			{
				cin>>arr[i][j];
				pro*=arr[i][j];
				sum+=arr[i][j];
			}
			if (pro==1)
				a=0;
			if (sum==0)
				b=0;
		}
		for (j=0;j<m;j++)
		{
			pro=1;
			sum=0;
			for (i=0;i<n;i++)
			{
				pro*=arr[i][j];
				sum+=arr[i][j];	
			}
			if (pro==1)
				d=0;
			if (sum==0)
				c=0;
		}
		cout<<a+b+c+d<<endl;
	}
	return 0;
}
