#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while (t--)
	{
	    long long int n,i,l,r,flag=0,max=0;
	    cin>>n;
	    long long int arr[n];
	    for (i=0;i<n;i++)
	        cin>>arr[i];
	    sort(arr,arr+n);
	    for (i=0;i<n;i++)
	    {
	        l=0;
	        r=n-1;
	        while (l<r)
	        {
	            if (arr[i]-arr[l]-arr[r]==0)
	            {
	                flag=1;
	                if (arr[i]>max)
	                	max=arr[i];
	                break;
	            }
	            else if (arr[i]-arr[l]-arr[r]<0)
	                r--;
	            else
	                l++;
	        }
	    }
	    if (flag==1)
	        cout<<max<<endl;
	    else
	        cout<<"-1"<<endl;
	}
    return 0;
}
