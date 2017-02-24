#include <bits/stdc++.h>
using namespace std;

double dist(double x1, double x2, double y1, double y2)
{
	double res;
	double a=abs(x1-x2);
	double b=abs(y1-y2);
	res=sqrt(a*a+b*b);
	return res;
}

int main()
{
	double t,x1,y1,x2,y2,r1,r2;
	cin>>t;
	while (t--)
	{
		cin>>x1>>y1>>r1>>x2>>y2>>r2;
		if (dist(x1,x2,y1,y2)>r1+r2)
			cout<<"No Convergence\n";
		else if (dist(x1,x2,y1,y2)==r1+r2)
			cout<<"Convergence Started\n";
		else
			cout<<"Converged\n";
	}
}
