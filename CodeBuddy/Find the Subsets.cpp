#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,j,min,x,y;
    int arr[20];
    cin>>t;
    while (t--)
    {
    	min=INT_MAX;
    	cin>>n;
    	for (i=0;i<n;i++)
    		cin>>arr[i];
    	for (i=1;i<(1<<n);i++)
    	{
    		x=0;
    		y=0;
    		for (j=0;j<n;j++)
    		{
    			if (i&(1<<j))
    			{
    				x+=arr[j];
    			}
    			else
    			{
    				y+=arr[j];
    			}
    		}
    		if (abs(x-y)<min)
    			min=abs(x-y);
    	}
    	cout<<min<<endl;
    }
    return 0;
}
