#include <bits/stdc++.h>
using namespace std;

int rodcut(int arr[], int n)
{
	int val[n+1];
	val[0]=0;
	int i,j;
	for (i=1;i<=n;i++)
	{
		int maxi=INT_MIN;
		for (j=0;j<i;j++)
			maxi=max(maxi, arr[j]+val[i-j-1]);
		val[i]=maxi;
	}
	return val[n];
}

int main()
{
	int t,n,i;
	cin>>t;
	while (t--)
	{
		cin>>n;
		int arr[n];
		for (i=0;i<n;i++)
			cin>>arr[i];
		cout<<rodcut(arr,n)<<endl;
	}
    return 0;
}
