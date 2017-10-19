#include <bits/stdc++.h>
using namespace std;

int main()
{
	double a[3];
	cin>>a[0]>>a[1]>>a[2];
	sort(a,a+3);
	if (a[2]>=a[1]+a[0])
		cout<<"NAO FORMA TRIANGULO\n";
	else 
	{
		if (a[2]*a[2]==a[1]*a[1]+a[0]*a[0])
			cout<<"TRIANGULO RETANGULO\n";
		if (a[2]*a[2]>a[1]*a[1]+a[0]*a[0])
			cout<<"TRIANGULO OBTUSANGULO\n";
		if (a[2]*a[2]<a[1]*a[1]+a[0]*a[0])
			cout<<"TRIANGULO ACUTANGULO\n";
		if (a[0]==a[1] && a[1]==a[2])
			cout<<"TRIANGULO EQUILATERO\n";
		else if (a[0]==a[1] || a[1]==a[2] || a[2]==a[0])
			cout<<"TRIANGULO ISOSCELES\n";
	}
    return 0;
}
