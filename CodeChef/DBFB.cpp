#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
using namespace std;
 
ll fibo[100005];
void pre()
{
	int i;
	fibo[0]=0;
	fibo[1]=1;
	for (i=2;i<100005;i++)
		fibo[i]=((fibo[i-1]%MOD)+(fibo[i-2]%MOD))%MOD;
}
 
int main()
{
	pre();
	int t,n,k,i,j;
	cin>>t;
	while (t--)
	{
		cin>>n>>k;
		ll ar[n],br[n];
		for (i=0;i<n;i++)
			cin>>ar[i];
		for (i=0;i<n;i++)
			cin>>br[i];
		ll asum=0,bsum=0;
		for (i=0;i<n;i++)
		{
			asum=((asum%MOD)+(ar[i]%MOD))%MOD;
			bsum=((bsum%MOD)+(br[i]%MOD))%MOD;
		}
		ll res;
		if (k==1)
			res = ((n%MOD)*(asum%MOD))%MOD;
		else
		{
			ll suma = ((fibo[k-2]%MOD)*(asum%MOD))%MOD;
			ll sumb = ((fibo[k-1]%MOD)*(bsum%MOD))%MOD;
			res = ((n%MOD) * ((suma%MOD + sumb%MOD)%MOD))%MOD;
		}
		cout<<res<<"\n";
	}	
    return 0;
}
