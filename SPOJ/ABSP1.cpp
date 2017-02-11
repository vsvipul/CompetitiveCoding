#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i;
    cin>>t;
    while (t--)
    {
    	long long int res=0;
    	cin>>n;
    	int arr[n];
    	int cum[n];
    	cin>>arr[0];
    	cum[0]=arr[0];
    	for (i=1;i<n;i++)
    	{
    		cin>>arr[i];
    		cum[i]=cum[i-1]+arr[i];
    	}
    	for (i=0;i<n-1;i++)
    	{
    		res+=abs(((n-i-1)*(arr[i]))-(cum[n-1]-cum[i]));
    	}
    	cout<<res<<'\n';
    }
    return 0;
}
