#include <bits/stdc++.h>
using namespace std;

string fnc(int x, int y)
{
	int a,b,c;
	a=9*x*x+y*y;
	b=2*x*x+25*y*y;
	c=-100*x+y*y*y;
	if (a > b && a > c)
		return "Rafael ganhou";
	else if (b>a && b>c)
		return "Beto ganhou";
	else
		return "Carlos ganhou";
}

int main()
{
	int t,x,y;
	cin>>t;
	while (t--)
	{
		cin>>x>>y;
		cout<<fnc(x,y)<<endl;
	}	
    return 0;
}
