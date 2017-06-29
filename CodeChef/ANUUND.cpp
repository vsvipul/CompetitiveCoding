#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,i,n,j;
	cin>>t;
	while (t--)
	{
		cin>>n;
		int arr[n];
		for (i=0;i<n;i++)
			cin>>arr[i];
		sort(arr,arr+n);
		if (n%2)
		{
			i=0,j=n/2+1;
			while (i<=n/2 || j<n)
			{
				if (i<=n/2)
				{
					cout<<arr[i]<<" ";
					i++;
				}
				if (j<n)
				{
					cout<<arr[j]<<" ";
					j++;
				}
			}
		}
		else
		{
			i=0,j=n/2;
			while (i<n/2 || j<n)
			{
				if (i<n/2)
				{
					cout<<arr[i]<<" ";
					i++;
				}
				if (j<n)
				{
					cout<<arr[j]<<" ";
					j++;
				}
			}	
		}
		cout<<"\n";
	}
	return 0;
}
