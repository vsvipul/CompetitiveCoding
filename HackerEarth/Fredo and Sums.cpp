#include <bits/stdc++.h>
using namespace std;
 
long long int arr[100001];
 
int main()
{
	long long int min,max,t,n,i;
	cin>>t;
	while (t--)
	{
		min=0;
		max=0;
		cin>>n;
		for (i=0;i<n;i++)
			cin>>arr[i];
		sort(arr,arr+n);
		for (i=0;i<n-1;i+=2)
		{
			min+=abs(arr[i]-arr[i+1]);
		}
		for (i=0;i<n/2;i++)
		{
			max+=abs(arr[i]-arr[n-i-1]);
		}
		cout<<min<<" "<<max<<"\n";
	}
    return 0;
}
