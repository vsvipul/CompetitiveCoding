#include <bits/stdc++.h>
using namespace std;

int nod[1000001];
void sieve()
{
	int i,j;
	memset(nod,0,sizeof(nod));
	for (i=2;i<1000001;i++)
	{
		for (j=i;j<1000001;j+=i)
			nod[j]++;
	}
	for (i=1;i<1000001;i++)
		nod[i]++;
}

int main() {
	sieve();
	int t,a,b;
	scanf("%d",&t);
	while (t--)
	{
		scanf("%d%d",&a,&b);
		printf("%d\n",nod[__gcd(a,b)]);
	}
	return 0;
}
