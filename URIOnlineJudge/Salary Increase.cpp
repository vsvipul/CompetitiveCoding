#include <bits/stdc++.h>
using namespace std;

int main()
{
	double a,ne,ad;
	int pe;
	cin>>a;
	if (a>=0 && a<=400)
	{
		ad=.15*a;
		ne=a+ad;
		pe=15;
	}
	else if (a<=800)
	{
		ad=.12*a;
		ne=a+ad;
		pe=12;
	}
	else if (a<=1200)
	{
		ad=.10*a;
		ne=a+ad;
		pe=10;
	}
	else if (a<=2000)
	{
		ad=.07*a;
		ne=a+ad;
		pe=7;
	}
	else
	{
		ad=.04*a;
		ne=a+ad;
		pe=4;
	}
	cout<<"Novo salario: "<<fixed<<setprecision(2)<<ne<<endl;
	cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<ad<<endl;
	cout<<"Em percentual: "<<pe<<" \%\n";
    return 0;
}
