#include <bits/stdc++.h>
#define max 10000000
using namespace std;

int main()
{
    long long int t,n,i,j;
    long long int arra[max]={0},arrb[max]={0};
    cin>>t;
    for (i=2;i*i<=max;i++)
    {
    	if (arra[i]==0)
    	{
    		for (j=2*i;j<=max;j+=i)
    			arra[j]=1;
    	}
    }
    for (i=2;i<=max;i++)
    {
    	if (arra[i]==0)
    		arrb[i]=arrb[i-1]+1;
    	else
    		arrb[i]=arrb[i-1];
    }
    while (t--)
    {
    	cin>>n;
    	cout<<arrb[n]<<endl;
    }
    return 0;
}
