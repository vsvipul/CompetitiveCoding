#include <bits/stdc++.h>
using namespace std;

int nod[1000005];
int cumu[1000005];
void sieve(int n)
{
	int i,j;
	memset(nod,0,sizeof(nod));
	memset(cumu,0,sizeof(cumu));
	for (i=1;i<n;i++)
	{
		for (j=i;j<n;j+=i)
			nod[j]++;
	}
	for (i=1;i<n;i++)
		cumu[nod[i]]++;
	for (i=1;i<n;i++)
		cumu[i]+=cumu[i-1];
}

int main()
{
	int t,n,x;
	scanf("%d%d",&t,&n);
	sieve(n+1);
	while (t--)
	{
		scanf("%d",&x);
		printf("%d\n",cumu[nod[x]-1]);
	}
    return 0;
}
