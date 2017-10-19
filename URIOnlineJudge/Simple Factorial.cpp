#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i,n;
	cin>>n;
	long long int res=1;
	for (i=2;i<=n;i++)
	{
		res*=i;
	}
	cout<<res<<endl;
    return 0;
}
