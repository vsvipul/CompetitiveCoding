#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t,n,i;
	cin>>t;
	while (t--)
	{
		cin>>n;
		int a[n],b[n],s=0;
		for (i=0;i<n;i++)
			cin>>a[i];
		for (i=0;i<n;i++)
		{
			cin>>b[i];
			s+=a[i]-b[i];
		}
		if (s==0)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
    return 0;
}
