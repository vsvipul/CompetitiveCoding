#include <bits/stdc++.h>
using namespace std;

int valid(int x)
{
	return x==2002;
}

int main()
{
	int x;
	while (1)
	{
		cin>>x;
		if (valid(x))
		{
			cout<<"Acesso Permitido\n";
			break;
		}
		else
			cout<<"Senha Invalida\n";
	}
    return 0;
}
