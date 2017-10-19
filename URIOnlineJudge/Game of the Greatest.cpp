#include <bits/stdc++.h>
#define PI 3.14159
using namespace std;

int main()
{
	int t,a,b;
	while (1)
	{
		cin>>t;
		if (t==0)
			break;
		int c=0,d=0;
		while (t--)
		{
			cin>>a>>b;
			if (a>b)
				c++;
			else if (a<b)
				d++;
		}
		cout<<c<<" "<<d<<endl;
	}
	return 0;
}