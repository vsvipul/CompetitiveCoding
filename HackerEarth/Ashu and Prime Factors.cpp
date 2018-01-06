#include <bits/stdc++.h>
using namespace std;

int minprime[1000001];
int freq[1000001];
void sieve()
{
	int i,j;
	memset(minprime,-1,sizeof(minprime));
	for (i=2;i<1000001;i++)
	{
		if (minprime[i]==-1)
		{
			for (j=i;j<1000005;j+=i)
				if (minprime[j]==-1)
					minprime[j]=i;
		}
	}
	memset(freq,0,sizeof(freq));
	for (i=2;i<1000005;i++)
	{
	    if (minprime[i]>0 && minprime[i]<1000001)
		    freq[minprime[i]]++; 
	}	    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	sieve();
	int t,n;
	cin>>t;
	while (t--)
	{
		cin>>n;
		cout<<freq[n]<<"\n";
	}
	return 0;
}
