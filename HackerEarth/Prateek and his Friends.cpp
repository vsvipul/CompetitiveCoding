#include <iostream>
using namespace std;

int main()
{
    long int t,n,x,i;
    cin>>t;
    while (t--)
    {
    	cin>>n>>x;
    	long int arr[n];
    	for (i=0;i<n;i++)
    	{
    		cin>>arr[i];
    	}
    	int sum=0,start=0,flag=0;
    	for (i=0;i<n;i++)
    	{
    		while ((sum<x)&&(start<n))
    		{
    			sum+=arr[start];
    			start++;
    		}
    		if (sum==x)
    		{
    			flag=1;break;
    		}
    		else if (sum>x)
    		{
    			sum-=arr[i];
    		}
    	}
    	if (flag==1)
    		cout<<"YES"<<endl;
    	else
    		cout<<"NO"<<endl;
    }
    return 0;
}
