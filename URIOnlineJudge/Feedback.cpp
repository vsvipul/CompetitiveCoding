#include <bits/stdc++.h>
#define PI 3.14159
using namespace std;

int main()
{
	int t,k,tmp;
	cin>>t;
	while (t--)
	{
		cin>>k;
		while (k--)
		{
			cin>>tmp;
			switch (tmp)
			{
				case 1: cout<<"Rolien\n";break;
				case 2: cout<<"Naej\n";break;
				case 3: cout<<"Elehcim\n";break;
				case 4: cout<<"Odranoel\n";break;
			}
		}
	}
	return 0;
}
