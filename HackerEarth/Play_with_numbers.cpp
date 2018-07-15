#include <bits/stdc++.h>
#define vi vector <int>
#define vll vector <long long int>
#define pb push_back
#define ll long long int
using namespace std;

int main()
{
	int n,q,i,tmp,a,b;
	scanf("%d%d",&n,&q);
	vll v;
	for (i=0;i<n;i++)
	{
		scanf("%lld",&tmp);
		v.pb(tmp);
	}
	for (i=1;i<n;i++)
		v[i]+=v[i-1];
	while (q--)
	{
		scanf("%d%d",&a,&b);
		a--;b--;
		ll sum=0;
		if (a==0)
			sum=v[b];
		else
			sum=v[b]-v[a-1];
		sum/=(b-a+1);
		printf("%lld\n",sum);
	}
    return 0;
}
