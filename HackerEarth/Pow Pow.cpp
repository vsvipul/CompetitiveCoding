#include <bits/stdc++.h>
using namespace std;
#define LL long long int
#define MOD 1000000007

LL power(LL a, LL b)
{
	if (b==0)
		return 1;
	if (b==1)
		return (a%MOD);
	else if (b%2==0)
		return power((a*a)%MOD,b/2);
	else
		return (a*power((a*a%MOD),b/2))%MOD;
}

int main()
{
	LL n,i;
	cin>>n;
	LL a,b;
	while (n--)
	{
		cin>>a>>b;
		a%=MOD;
		cout<<power(a,b)<<endl;
	}
	return 0;
}