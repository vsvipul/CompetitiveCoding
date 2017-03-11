#include <bits/stdc++.h>
using namespace std;

int lp[10000001];
void sieve()
{
	int i,j;
	for (i=2;i<10000001;i++)
	{
		if (lp[i]==0)
		{
			for (j=i;j<10000001;j+=i)
			{
				lp[j]=i;
			}
		}
	}
	lp[1]=1;
}

int main()
{
	sieve();
	int t,n;
	scanf("%d",&t);
	while (t--)
	{
		scanf("%d",&n);
		printf("%d\n",lp[n]);
	}
	return 0;
}
