#include <bits/stdc++.h>
using namespace std;

int minp[1000005];
void sieve()
{
	int i,j;
	memset(minp,-1,sizeof(minp));
	for (i=2;i<1000005;i++)
	{
		if (minp[i]==-1)
		{
			for (j=i;j<1000005;j+=i)
			{
			    if (minp[j]==-1)
				    minp[j]=i;
			}
		}
	}
}

int main()
{
    int t,n;
    scanf("%d",&t);
    sieve();
    while (t--)
    {
    	scanf("%d",&n);
    	printf("%d\n",n-minp[n]);
    }
    return 0;
}
