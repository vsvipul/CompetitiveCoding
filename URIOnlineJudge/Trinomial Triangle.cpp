#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if (!n)
		cout<<"1\n";
	else
	{
		long long int res=1;
		while (n--)
			res*=3;
		cout<<res<<"\n";
	}
}
