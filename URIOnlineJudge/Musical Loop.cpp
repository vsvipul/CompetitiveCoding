#include <bits/stdc++.h>
#define PI 3.14159
using namespace std;

int main()
{
	int n,i;
	while (1)
	{
		cin>>n;
		if (n==0) break;
		int arr[n+2],res=0;
		for (i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		arr[n]=arr[0];
		arr[n+1]=arr[1];
		for (i=1;i<=n;i++)
		{
			if ((arr[i-1]>arr[i] && arr[i+1]>arr[i]) || (arr[i-1]<arr[i] && arr[i+1]<arr[i]))
				res++;
		}
		cout<<res<<endl;
	}
	return 0;
}
