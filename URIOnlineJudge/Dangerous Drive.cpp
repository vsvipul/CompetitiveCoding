#include <bits/stdc++.h>
#define PI 3.14159
using namespace std;

int main()
{
	int n,r,t,i;
	while (cin>>n>>r)
	{
		int arr[n];
		memset(arr,0,sizeof(arr));
		for (i=0;i<r;i++)
		{
			cin>>t;
			arr[t-1]=1;
		}
		for (i=0;i<n;i++)
		{
			if (arr[i]==0)
				cout<<i+1<<" ";
		}
		if (n==r)
			cout<<"*";
		cout<<endl;
	}
	return 0;
}
