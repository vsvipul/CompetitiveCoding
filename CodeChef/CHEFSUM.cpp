#include <bits/stdc++.h>
#define ll long long int 
using namespace std;
 
int main()
{
    ll t,n,i;
    cin>>t;
    while (t--)
    {
    	cin>>n;
    	ll pre[n],suf[n],arr[n];
    	memset(pre,0,sizeof(pre));
    	memset(suf,0,sizeof(suf));
    	for (i=0;i<n;i++)
    		cin>>arr[i];
    	pre[0]=arr[0];
    	for (i=1;i<n;i++)
    		pre[i]=pre[i-1]+arr[i];
    	suf[n-1]=arr[n-1];
    	for (i=n-2;i>=0;i--)
    		suf[i]=suf[i+1]+arr[i];
    	ll minval=suf[0]+pre[0];
    	ll mini=0;
    	for (i=1;i<n;i++)
    	{
    		if (suf[i]+pre[i]<minval)
    		{
    			minval=suf[i]+pre[i];
    			mini=i;
      		}
    	}
    	cout<<mini+1<<endl;
    }
    return 0;
}
