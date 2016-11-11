#include <iostream>
using namespace std;

int main()
{
    int n,i,j;
    cin>>n;
    int arr[n];
    for (i=0;i<n;i++)
    {
    	cin>>arr[i];
    }
    int sum=0;
    for (i=1;i<n;i++)
    {
    	if (arr[i]==0)
    	{
    		for (j=i-1;j>=0;j--)
    		{
    			if (arr[j]!=0)
    			{
    				arr[j]=0;break;
    			}
    		}
    	}
    }
    for (i=0;i<n;i++)
    {
    	sum+=arr[i];
    }
    cout<<sum;
    return 0;
}
