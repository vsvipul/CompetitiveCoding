#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,q,x,temp,res;
    cin>>n>>q;
    int arr[100001]={0};
    for (i=0;i<n;i++)
    {
    	cin>>temp;
    	arr[temp]++;
    }
    while (q--)
    {
    	res=0;
    	cin>>x;
    	for (i=1;i*i<=x;i++)
    	{
    		if (x%i==0)
    			res+=arr[i]+arr[x/i];
            if (i*i==x)
                res-=arr[i];
    	}
    	cout<<res<<endl;
    }
    return 0;
}
