#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while (t--)
	{
	    long long int n,i,res=0,sum=0;
	    cin>>n;
	    int arr[n];
	    for (i=0;i<n;i++)
	    {
	    	cin>>arr[i];
	    	sum+=arr[i];
	    }
	    sort(arr,arr+n);
	    if (sum%n==0)
	    {
	    	int temp,avg=sum/n;
		    for (i=0;i<n;i++)
		    {
		    	if (arr[i]>avg)
		    	{
		    		temp=arr[i]-avg;
		    		res+=temp;
		    	}
		    }
		    cout<<res<<endl;
		}
		else
			cout<<"-1"<<endl;
	}
    return 0;
}
