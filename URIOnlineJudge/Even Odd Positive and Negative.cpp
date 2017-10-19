#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,i,e=0,o=0,p=0,n=0;
	for (i=0;i<5;i++)
	{
		cin>>t;
		if (t%2)
			o++;
		else
			e++;
		if (t>0)
			p++;
		else if (t<0)
			n++;
	}
	cout<<e<<" valor(es) par(es)\n";
	cout<<o<<" valor(es) impar(es)\n";
	cout<<p<<" valor(es) positivo(s)\n";
	cout<<n<<" valor(es) negativo(s)\n";
	return 0;
}
