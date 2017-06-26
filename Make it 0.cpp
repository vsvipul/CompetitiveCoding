#include <bits/stdc++.h>
using namespace std;

int isprime[1000001];
int highest[1000001];
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
	for (i=2;i<1000001;i++)
	{
		for (j=2*i;j<1000001;j+=i)
			highest[j]=i;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,res;
	sieve();
	cin>>t;
	while (t--)
	{
		res=0;
		cin>>n;
		if (isprime[n])
			res=n;
		else
		{
			while (!isprime[n])
			{
				n=highest[n];
				res++;
			}
			res+=n;
		}
		cout<<res<<"\n";
	}
	return 0;
}
