#include <bits/stdc++.h>
#define MOD 1000003
using namespace std;

long long int arr[1000005];
void prec()
{
	int i;
	arr[0]=1;
	for (i=1;i<1000005;i++)
		arr[i]=((arr[i-1]%MOD)*(i%MOD))%MOD;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long int t,n,x;
	prec();
	cin>>t;
	while (t--)
	{
		cin>>n>>x;
		if (n>=1000003)
			cout<<"0\n";
		else
			cout<<((x%MOD)*(arr[n]%MOD)%MOD)<<"\n";
	}
	return 0;
}
