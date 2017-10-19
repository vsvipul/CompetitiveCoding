#include <bits/stdc++.h>
#define PI 3.14159
using namespace std;

int main()
{
	int a,b,c,d;
	while (1)
	{
		cin>>a>>b>>c>>d;
		if (a==0 && b==0 && c==0 && d==0)
			break;
		if (a==c && b==d)
			cout<<"0\n";
		else if (a==c || b==d || abs(c-a)==abs(d-b))
			cout<<"1\n";
		else 
			cout<<"2\n";
	}	
	return 0;
}
