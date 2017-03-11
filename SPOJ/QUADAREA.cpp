#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	double a,b,c,d,s,res;
	cin>>t;
	while (t--)
	{
		cin>>a>>b>>c>>d;
		s=(a+b+c+d)/2;
		res=sqrt((s-a)*(s-b)*(s-c)*(s-d));
		cout<<fixed<<setprecision(2)<<res<<'\n';
	}
	return 0;
}
