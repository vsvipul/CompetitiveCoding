#include <bits/stdc++.h>
#define PI 3.14159
using namespace std;

int main()
{
	int q,d,p;
	while (1)
	{
		cin>>q;
		if (q==0)
			break;
		cin>>d>>p;
		if ((p*d*q)/(p-q)==1)
			cout<<(p*d*q)/(p-q)<<" pagina\n";
		else 
			cout<<(p*d*q)/(p-q)<<" paginas\n";
	}
	return 0;
}
