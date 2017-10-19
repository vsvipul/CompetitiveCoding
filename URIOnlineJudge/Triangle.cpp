#include <bits/stdc++.h>
using namespace std;

int main()
{
	double a,b,c;
	cin>>a>>b>>c;
	if (a+b<=c || b+c<=a || c+a <=b)
	{
		cout<<"Area = "<<fixed<<setprecision(1)<<(0.5)*(a+b)*c<<endl;
	}
	else
	{
		cout<<"Perimetro = "<<fixed<<setprecision(1)<<a+b+c<<endl;
	}
    return 0;
}