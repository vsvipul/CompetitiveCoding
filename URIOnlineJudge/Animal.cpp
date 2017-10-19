#include <bits/stdc++.h>
using namespace std;

int main()
{
	string a,b,c;
	cin>>a>>b>>c;
	if (a=="vertebrado")
	{
		if (b=="ave")
		{
			if (c=="carnivoro")
				cout<<"aguia\n";
			else if (c=="onivoro")
				cout<<"pomba\n";
		}
		else if (b=="mamifero")
		{
			if (c=="onivoro")
				cout<<"homem\n";
			else if (c=="herbivoro")
				cout<<"vaca\n";
		}
	}
	else if (a=="invertebrado")
	{
		if (b=="inseto")
		{
			if (c=="hematofago")
				cout<<"pulga\n";
			else if (c=="herbivoro")
				cout<<"lagarta\n";
		}
		else if (b=="anelideo")
		{
			if (c=="hematofago")
				cout<<"sanguessuga\n";
			else if (c=="onivoro")
				cout<<"minhoca\n";
		}
	}
    return 0;
}
