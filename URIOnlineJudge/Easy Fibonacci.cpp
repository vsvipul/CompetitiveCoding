#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,i;
	cin>>n;
	long long int arr[n];
	arr[0]=0;
	arr[1]=1;
	for (i=2;i<n;i++)
		arr[i]=arr[i-1]+arr[i-2];
	for (i=0;i<n-1;i++)
		cout<<arr[i]<<" ";
	cout<<arr[n-1]<<endl;
    return 0;
}
