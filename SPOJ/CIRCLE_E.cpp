#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	double a,b,c,res,num,den;
	cin>>t;
	while (t--)
	{
		cin>>a>>b>>c;
		num = a*b*c;
		den = a*b + a*c + b*c + 2*sqrt(a*b*c*(a+b+c));
		res=num/den;
		cout<<fixed<<setprecision(6)<<res<<'\n';
	}
	return 0;
}
