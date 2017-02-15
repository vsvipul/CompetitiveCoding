#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll smallprime[10000001];
ll arr[10000001];
void sieve()
{
	int i,j;
	memset(smallprime,0,sizeof(smallprime));
	for (i=2;i<10000001;i++)
	{
		if (smallprime[i]==0)
		{
			for (j=i;j<10000001;j+=i)
			{
			    if (smallprime[j]==0)
                    smallprime[j]=i;
			}
		}
	}
	arr[0]=0;
	arr[1]=0;
	for (i=2;i<10000001;i++)
	{
		arr[i]=arr[i-1]+smallprime[i];
	}
}

int main()
{
	sieve();
    ll t,n;
    cin>>t;
    while (t--)
    {
    	cin>>n;
    	cout<<arr[n]<<'\n';
    }
    return 0;
}
