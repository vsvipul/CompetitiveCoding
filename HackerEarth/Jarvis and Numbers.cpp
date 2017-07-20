#include <bits/stdc++.h>
using namespace std;

int convertbaseandsum(int n, int base)
{
	int res=0;
	while (n>0)
	{
		res+=n%base;
		n/=base;
	}
	return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
	int t,n,i,num,den;
	cin>>t;
	while (t--)
	{
		cin>>n;
		num=0;
		for (i=2;i<n;i++)
			num+=convertbaseandsum(n,i);
		den=n-2;
		den/=__gcd(num,den);
		cout<<den<<endl;
	}
    return 0;
}

