#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

int isprime[10000001];

void sieve()
{
	int i,j;
	memset(isprime,1,sizeof(isprime));
	for (i=2;i<10000001;i++)
	{
		if (isprime[i]==1)
		{
			for (j=2*i;j<10000001;j+=i)
				isprime[j]=0;
		}
	}
}

int fnc(int n)
{
	int i,res,count,tmp,x;
	res=1;
	for (i=2;i<=n;i++)
	{
		if (isprime[i])
		{
			count=0;
			x=n;
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
  int t,n;
	cin>>t;
	sieve();
	while (t--)
	{
		cin>>n;
		cout<<fnc(n)<<endl;
	}
  return 0;
}
