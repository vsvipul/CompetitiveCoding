#include <bits/stdc++.h>
#define PI 3.14159
using namespace std;

int main()
{
	int x,y;
	cin>>x>>y;
	switch (x)
	{
		case 1: cout<<"Total: R$ "<<fixed<<setprecision(2)<<4.0*y<<endl;break;
		case 2: cout<<"Total: R$ "<<fixed<<setprecision(2)<<4.5*y<<endl;break;
		case 3: cout<<"Total: R$ "<<fixed<<setprecision(2)<<5.0*y<<endl;break;
		case 4: cout<<"Total: R$ "<<fixed<<setprecision(2)<<2.0*y<<endl;break;
		case 5: cout<<"Total: R$ "<<fixed<<setprecision(2)<<1.5*y<<endl;break;
	}
	return 0;
}
