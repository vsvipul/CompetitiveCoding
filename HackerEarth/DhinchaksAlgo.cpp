#include <bits/stdc++.h>
#define MOD 29009933
using namespace std;

int main()
{
	int t,n,i;
	cin>>t;
	while (t--)
	{
		cin>>n;
		if (n>=104729)
		    cout<<"0\n";
		else
		{
		    long long int res=1;
		    for (i=1;i<=n;i++)
			    res=((res%MOD)*(i%MOD))%MOD;
		    cout<<res<<endl;
		}
	}
	return 0;
}