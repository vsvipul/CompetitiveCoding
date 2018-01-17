#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,a,b,c,d;
	cin>>t;
	while (t--)
	{
		cin>>a>>b>>c>>d;
		if ((a==b && c==d)||(a==c && b==d)||(a==d && b==c))
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
} 
