#include <bits/stdc++.h>
#define PI 3.14159
using namespace std;

int main()
{
	int a,b,c;
	while (cin>>a>>b>>c)
	{
		if ((a && b && c)||(!a && !b && !c))
			cout<<"*\n";
		else if (a==b)
			cout<<"C\n";
		else if (b==c)
			cout<<"A\n";
		else
			cout<<"B\n";
	}
	return 0;
}
