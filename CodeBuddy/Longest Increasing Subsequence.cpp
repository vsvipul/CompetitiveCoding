#include <bits/stdc++.h>
using namespace std;

int fnc(int arr[], int n)
{
	int i,j,largest=INT_MIN;
	int lis[n];
	for (i=0;i<n;i++)
	{
		lis[i]=1;
		for (j=0;j<i;j++)
		{
			if (arr[i]>arr[j] && lis[i]<=lis[j])
			{
				lis[i]=lis[j]+1;
			}
		}
	}
	for (i=0;i<n;i++)
	{
		if (largest<lis[i])
			largest=lis[i];
	}
	return largest;
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
    	 cout<<fnc(arr,n)<<endl;
    }
    return 0;
}
