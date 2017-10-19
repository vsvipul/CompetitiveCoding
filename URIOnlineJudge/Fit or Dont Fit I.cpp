#include <bits/stdc++.h>
using namespace std;

string fnc(int a, int b)
{
	if (a==b)
		return "encaixa";
	int i=10;
	while (a/i>0)
	{
		if (a%i==b)
			return "encaixa";
		i*=10;
	}
	return "nao encaixa";
}

int main()
{
	int a,b,t;
	cin>>t;
	while (t--)
	{
		cin>>a>>b;
		cout<<fnc(a,b)<<endl;
	}		
    return 0;
}
