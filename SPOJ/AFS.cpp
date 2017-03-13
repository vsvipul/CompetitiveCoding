#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll fact[1000001];
void sieve()
{
	int i,j;
	memset(fact,0,sizeof(fact));
	for (i=2;i<1000001;i++)
	{
		for (j=2*i;j<1000001;j+=i)
			fact[j]+=i;
	}
	for (i=2;i<1000001;i++)
		fact[i]+=fact[i-1]+1;
}

int main() {
	sieve();
	int t,n;
	scanf("%d",&t);
	while (t--)
	{
		scanf("%d",&n);
		printf("%lld\n",fact[n]);
	}
	return 0;
}
