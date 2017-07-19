#include <bits/stdc++.h>
using namespace std;

int isprime[1001];
void sieve()
{
	int i,j;
	memset(isprime,1,sizeof(isprime));
	for (i=2;i<1001;i++)
	{
		if (isprime[i])
		{
			for (j=2*i;j<1001;j+=i)
			{
				isprime[j]=false;
			}
		}
	}
}

int main()
{
	sieve();
	int i,n;
	cin>>n;
	for (i=2;i<n;i++)
	{
		if (isprime[i])
			cout<<i<<" ";
	}
    return 0;
}
