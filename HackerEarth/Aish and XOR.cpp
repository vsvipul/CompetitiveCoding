#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    int n,i,q,l,r,temp,val,ubits;
    cin>>n;
    int arr[n];
    int sum[n];
    cin>>arr[0];
    sum[0]=arr[0];
    for (i=1;i<n;i++)
    {
    	cin>>temp;
    	arr[i]=arr[i-1]^temp;
    	sum[i]=sum[i-1]+temp;
    }
    cin>>q;
    while (q--)
    {
    	cin>>l>>r;
    	if(l==1)
    	{
    		val=arr[r-1];
    		ubits=(r-l+1)-(sum[r-1]);
    	}
    	else
    	{
    		val=arr[r-1]^arr[l-2];
    		ubits=(r-l+1)-(sum[r-1]-sum[l-2]);
    	}
    	cout<<val<<" "<<ubits<<'\n';
    }
    return 0;
}
