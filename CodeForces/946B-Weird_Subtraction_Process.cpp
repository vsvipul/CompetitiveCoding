#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll a,b;

void process()
{
	if (a==0 || b==0)
		return; 
	else if (a>=2*b)
	{
		a%=(2*b);
		process();
	}
	else if (b>=2*a)
	{
		b%=(2*a);
		process();
	}
	else
		return;
}

int main()
{
	cin>>a>>b;
	process();
	cout<<a<<" "<<b<<"\n";
	return 0;
}
