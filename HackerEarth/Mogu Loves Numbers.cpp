#include <bits/stdc++.h>
using namespace std;

int nod[1000005];
int isprime[1000005];
int res[1000005];

void sieve()
{
	int i,j;
	memset(isprime,1,sizeof(isprime));
	memset(nod,0,sizeof(nod));
	memset(res,0,sizeof(res));
	for (i=2;i<1000005;i++)
	{
		if (isprime[i])
		{
			for (j=2*i;j<1000005;j+=i)
				isprime[j]=0;
		}
	}
	isprime[1]=0;
	for (i=1;i<1000005;i++)
	{
		for (j=i;j<1000005;j+=i)
			nod[j]++;
	}
	for (i=1;i<1000005;i++)
	{
		if (nod[i]%2==0 && isprime[nod[i]])
			res[i]=1;
	}
	for (i=1;i<1000005;i++)
		res[i]+=res[i-1];
}

int main()
{
	sieve();
	int t,l,r,tmp;
    scanf("%d",&t);
	while (t--)
	{
		scanf("%d%d",&l,&r);
		if (l>r)
		{
			tmp=l;
			l=r;
			r=tmp;
		}
		printf("%d\n",res[r]-res[l-1]);
	}    
    return 0;
}
