#include <bits/stdc++.h>
using namespace std;

bool isprime[100005];
void sieve()
{
	int i,j;
	memset(isprime, true, sizeof(isprime));
	for (i=2;i<100005;i++)
	{
		for (j=2*i;j<100005;j+=i)
		{
			isprime[j]=false;
		}
	}
}

long long int fnc(int x)
{
	sieve();
	if (x==0)	return 0;
	if (x==1) return 1;
	if (x==2) return 2;
	if (isprime[x])	return 0;
	int i,j,root=sqrt(x);
	for (i=root ; i>=1 ; i--)
	{
		for (j=root ; j<=x ; j++)
		{
			if (i*j==x)
				return fnc(i) + fnc(j);
		}
	}
}

int main()
{
	int x;
	cin>>x;
	cout<<fnc(x);
  return 0;
}
