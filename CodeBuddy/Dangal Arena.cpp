#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long int
using namespace std;

int isprime[1000001];

void sieve()
{
	int i,j;
	memset(isprime,1,sizeof(isprime));
	for (i=2;i<1000001;i++)
	{
		if (isprime[i])
		{
			for (j=2*i;j<1000001;j+=i)
				isprime[j]=0;
		}
	}
}

int fnc(int n)
{
	ll i,res,count,tmp,x;
	res=1;
	for (i=2;i<=n;i++)
	{
		if (isprime[i])
		{
			count=0;
			x=n;
			x/=i;
			while (x!=0)
			{
				x/=i;
				count++;
			}
			tmp=1;
			while (count--)
				tmp*=i;
			res=((res%mod)*(tmp%mod))%mod;
		}
	} 
	return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t,n;
	scanf("%d",&t);
	sieve();
	while (t--)
	{
		scanf("%d",&n);
	    printf("%d\n",fnc(n));
	}
  return 0;
}
