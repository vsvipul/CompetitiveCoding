#include <bits/stdc++.h>
using namespace std;

int isprime[10000001];
void sieve()
{
	int i,j;
	memset(isprime,1,sizeof(isprime));
	for (i=2;i<10000001;i++)
	{
		if (isprime[i])
		{
			for (j=2*i;j<10000001;j+=i)
			{
				isprime[j]=0;
			}
		}
	}
	isprime[1]=0;
}

int main()
{
	sieve();
	int t,n;
	cin>>t;
	while (t--)
	{
		cin>>n;
		if (isprime[n])
			cout<<n<<" eh primo\n";
		else
			cout<<n<<" nao eh primo\n";
	}
    return 0;
}
