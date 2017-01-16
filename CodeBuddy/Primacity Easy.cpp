#include <bits/stdc++.h>
using namespace std;

int primacity[10000001];
void sieve()
{
	int i,j;
	memset(primacity,0,sizeof(primacity));
	for (i=2;i<10000001;i++)
	{
		if (primacity[i]==0)
		{
			for (j=i;j<10000001;j+=i)
			{
				primacity[j]++;
			}
		}
	}
}

int main()
{
	int t,a,b,k,i,res;
	sieve();
	cin>>t;
	while (t--)
	{
		res=0;
		cin>>a>>b>>k;
		for (i=a;i<=b;i++)
		{
			if (primacity[i]==k)
				res++;
		}
		cout<<res<<endl;
	}
    return 0;
}
