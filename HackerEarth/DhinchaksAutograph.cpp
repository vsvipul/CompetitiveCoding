#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,m,n;
	cin>>t;
	while (t--)
	{
		cin>>m>>n;
		if (__gcd(m,n)==1)
			cout<<"HAPPY\n";
		else
			cout<<"SAD\n";
	}
	return 0;
}