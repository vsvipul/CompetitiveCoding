#include <bits/stdc++.h>
using namespace std;

long long int factor[10000001];
void sieve()
{
	int i,j;
	memset(factor,0,sizeof(factor));
	for (i=1;i<10000001;i++)
	{
		for (j=i;j<10000001;j+=i)
		{
			factor[j]+=i;
		}
	}
	factor[1]=0;
	for(i=2;i<10000001;i++){
		factor[i]+=factor[i-1];
	}
}

int main()
{
	int t,n,i,res;
	sieve();
	cin>>t;
	while (t--)
	{
		cin>>n;
		cout<<factor[n]<<endl;
	}
    return 0;
}
