#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
    	int n,i;
    	cin>>n;
    	int arr[n];
    	int dis[n];
 		for (i=0;i<n;i++)
 			cin>>arr[i];
    	sort(arr,arr+n);
    	int j=0;
    	for (i=0;i<n-1;i++)
    	{
    		if (arr[i]==arr[i+1])
    		{
    			arr[i]=-1;
    		}
    	}
    	for (i=0;i<n;i++)
    	{
    		if (arr[i]!=-1)
    		{
    			dis[j]=arr[i];
    			j++;
    		}
    	}
    	int l=0,r=j-1;
    	while (l<=r)
    	{
    		if (l<r)
    		{
    			cout<<dis[r]<<" ";
    			r--;
    			cout<<dis[l]<<" ";
    			l++;
    		}
    		else
    		{
    			cout<<dis[r]<<" ";
    			r--;
    		}
    	}
    	cout<<endl;
    }
    return 0;
}
