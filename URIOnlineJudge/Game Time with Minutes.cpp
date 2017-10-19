#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c,d;
	while (cin>>a>>b>>c>>d)
	{
		int h=(c-a+24)%24;
		int m=d-b;
		if (m<0)
		{
			m+=60;h--;
		}
		if (h==0 && m==0)
			h=24;
		cout<<"O JOGO DUROU "<<h<<" HORA(S) E "<<m<<" MINUTO(S)\n";
	}
    return 0;
}
