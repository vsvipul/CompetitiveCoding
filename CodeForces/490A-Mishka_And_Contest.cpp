#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,k,i,j,tmp;
	cin>>n>>k;
	int arr[n];
	for (i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int res=0;
	for (i=0;i<n && arr[i]<=k;i++)
		res++;
	for (j=n-1;j>=i && arr[j]<=k;j--)
		res++;
	cout<<res<<endl;
	return 0;	
}
