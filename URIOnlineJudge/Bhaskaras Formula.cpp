#include <bits/stdc++.h>
#define PI 3.14159
using namespace std;

int main()
{
	double a,b,c;
	cin>>a>>b>>c;
	double d=b*b-4*a*c;
	if (a>0 && d>=0)
	{
		cout<<"R1 = "<<fixed<<setprecision(5)<<(-b+sqrt(d))/(2*a)<<endl;
		cout<<"R2 = "<<fixed<<setprecision(5)<<(-b-sqrt(d))/(2*a)<<endl;
	}
	else
		cout<<"Impossivel calcular\n";
	return 0;
}
