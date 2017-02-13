#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    int t,n1,n2,i,j;
    cin>>t;
    while (t--)
    {
    	cin>>n1;
    	int arr1[n1];
    	for (i=0;i<n1;i++)
    		cin>>arr1[i];
    	cin>>n2;
    	int arr2[n2];
    	for (i=0;i<n2;i++)
    		cin>>arr2[i];
    	int min=INT_MAX;
    	for (i=0;i<n1;i++)
    	{
    		for (j=0;j<n2;j++)
    		{
    			if (abs(arr1[i]-arr2[j])<min)
    			{
    				min=abs(arr1[i]-arr2[j]);
    			}
    		}
    	}
    	cout<<min<<'\n';
    }
    return 0;
}
