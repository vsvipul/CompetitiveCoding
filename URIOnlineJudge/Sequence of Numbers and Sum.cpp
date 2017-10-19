#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i,m,n;
	while (cin>>m>>n && m>0 && n>0)
	{
		int mi=min(m,n);
		int ma=max(m,n);
		long long int sum=0;
		for (i=mi;i<=ma;i++)
		{
			cout<<i<<" ";
			sum+=i;
		}
		cout<<"Sum="<<sum<<endl;
	}
	return 0;
}
