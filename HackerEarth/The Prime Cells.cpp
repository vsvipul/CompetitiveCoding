#include <bits/stdc++.h>
using namespace std;
 
int arr[102][102];
int isprime[1000];
void sieve()
{
	int i,j;
	memset(isprime,1,sizeof(isprime));
	for (i=2;i<1000;i++)
	{
		if (isprime[i])
		{
			for (j=2*i;j<1000;j+=i)
			{
				isprime[j]=0;
			}
		}
	}
}
 
int main()
{
	sieve();
    int n,i,j,res=0,sum=0;
    cin>>n;
    for (i=0;i<n;i++)
    {
    	for (j=0;j<n;j++)
    	{
    	    cin>>arr[i][j];
    	}
    }
    for (i=0;i<n;i++)
    {
    	for (j=0;j<n;j++)
    	{
    		if (i>0)
    			sum+=arr[i-1][j];
    		if (j>0)
    			sum+=arr[i][j-1];
    		if (i<n-1)
    			sum+=arr[i+1][j];
    		if (j<n-1)
    			sum+=arr[i][j+1];
    		if (isprime[sum])
    			res++;
    		sum=0;
    	}
    }
    cout<<res;
    return 0;
}
