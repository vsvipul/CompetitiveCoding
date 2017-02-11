#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t,n,i,sum,temp;
    scanf("%lld",&t);
    while (t--)
    {
    	sum=0;
    	cin>>n;
    	for (i=0;i<n;i++)
    	{
    		scanf("%lld",&temp);
    		sum=((sum%n)+(temp%n))%n;
    	}
    	if (sum==0)
    		printf("YES\n");
    	else
    		printf("NO\n");
    }
}
