#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int t,n,i,tmp;
	cin>>t;
	while (t--)
	{
		cin>>n;
		int arr[n+1];
		for (i=1;i<=n;i++)
			arr[i]=i;
		for (i=1;i<n;i+=2)
		{
			tmp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=tmp;
		}
		if (i==n)
		{
			tmp=arr[n];
			arr[n]=arr[n-1];
			arr[n-1]=tmp;
		}
		for (i=1;i<=n;i++)
			cout<<arr[i]<<" ";
		cout<<"\n";
	}
    return 0;
}
