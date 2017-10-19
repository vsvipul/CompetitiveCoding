#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i,tmp,c=0;
	for (i=0;i<5;i++)
	{
		cin>>tmp;
		if (tmp%2==0)
		{
			c++;
		}
	}
	cout<<c<<" valores pares\n";
	return 0;
}
