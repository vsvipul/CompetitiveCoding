#include <bits/stdc++.h>
#define PI 3.14159
using namespace std;

int main()
{
	int a,b;
	scanf("%d.%d",&a,&b);
	cout<<"NOTAS:\n";
	cout<<a/100<<" nota(s) de R$ 100.00\n";
	a-=(a/100)*100;
	cout<<a/50<<" nota(s) de R$ 50.00\n";
	a-=(a/50)*50;
	cout<<a/20<<" nota(s) de R$ 20.00\n";
	a-=(a/20)*20;
	cout<<a/10<<" nota(s) de R$ 10.00\n";
	a-=(a/10)*10;
	cout<<a/5<<" nota(s) de R$ 5.00\n";
	a-=(a/5)*5;
	cout<<a/2<<" nota(s) de R$ 2.00\n";
	a-=(a/2)*2;
	cout<<"MOEDAS:\n";
	cout<<a<<" moeda(s) de R$ 1.00\n";
	cout<<b/50<<" moeda(s) de R$ 0.50\n";
	b-=(b/50)*50;
	cout<<b/25<<" moeda(s) de R$ 0.25\n";
	b-=(b/25)*25;
	cout<<b/10<<" moeda(s) de R$ 0.10\n";
	b-=(b/10)*10;
	cout<<b/5<<" moeda(s) de R$ 0.05\n";
	b-=(b/5)*5;
	cout<<b<<" moeda(s) de R$ 0.01\n";
	return 0;
}
