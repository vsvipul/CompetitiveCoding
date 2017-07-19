#include <bits/stdc++.h>
using namespace std;

int isprime[1001];
void sieve()
{
	int i,j;
	memset(isprime,1,sizeof(isprime));
	for (i=2;i<1001;i++)
	{
		if (isprime[i])
		{
			for (j=2*i;j<1001;j+=i)
			{
				isprime[j]=false;
			}
		}
	}
}

int main()
{
    ios_base::sync_with_stdio(false);
	sieve();
	int t,n,i,j,res1,res2;
	char c,res;
	cin>>t;
	while (t--)
	{
		cin>>n;
		for (j=0;j<n;j++)
		{
			cin>>c;
			int val=(int) c;
			if (val<=65)
			{
				cout<<"C";
				continue;
			}
			for (i=val;i>=65;i--)
			{
				if (isprime[i])
				{
					res1=i;
					break;
				}
			}
			for (i=val+1;i<=122;i++)
			{
				if (isprime[i])
				{
					res2=i;
					break;
				}
			}
			if (abs(val-res2)<abs(val-res1))
				res=(char) res2;
			else
				res=(char) res1;
			cout<<res;
		}
		cout<<"\n";
	}
    return 0;
}
