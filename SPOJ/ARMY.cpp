#include <iostream>
using namespace std;

int main() {
	int i,t,ng,nm,g,m,gmax,mmax;
	cin>>t;
	while (t--)
	{
		gmax=-1;mmax=-1;
		cin>>ng>>nm;
		while (ng--)
		{
			cin>>g;
			if (g>gmax)
				gmax=g;
		}
		while (nm--)
		{
			cin>>m;
			if (m>mmax)
				mmax=m;
		}
		if (gmax>=mmax)
			cout<<"Godzilla\n";
		else
			cout<<"MechaGodzilla\n";
	}
	return 0;
}
