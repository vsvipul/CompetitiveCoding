#include <iostream>
using namespace std;

int main()
{
    int t,n,i,j,count;
    cin>>t;
    while (t--)
    {
    	count=0;
    	cin>>n;
    	int arr[n];
    	for (i=0;i<n;i++)
    	{
    		cin>>arr[i];
    	}
    	for (i=0;i<n;i++)
    	{
    		int flag=0;
    		for (j=i+1;j<n;j++)
    		{
    			if (arr[j]>=arr[i])
    			{
    				flag=1;break;
    			}
    		}
    		if (flag==0)
    			count++;
    	}
    	cout<<count<<endl;
    }
    return 0;
}
