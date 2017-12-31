#include <bits/stdc++.h>
using namespace std;

int isprime[1000005];
void sieve()
{
	int i,j;
	memset(isprime,1,sizeof(isprime));
	for (i=2;i<1000005;i++)
	{
		if (isprime[i])
			for (j=2*i;j<1000005;j+=i)
				isprime[j]=0;
	}
	isprime[1]=0;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	sieve();
	int n,tmp,mini,maxi,f=0;
	cin>>n;
	mini=INT_MAX;
	maxi=INT_MIN;
	while (n--)
	{	
		cin>>tmp;
		if (isprime[tmp])
		{
		    f=1;
			if (tmp>maxi)
				maxi=tmp;
			if (tmp<mini)
				mini=tmp;
		}
	}
	if (f)
	    cout<<abs(maxi-mini)<<"\n";
	else
	    cout<<"-1\n";
    return 0;
}
