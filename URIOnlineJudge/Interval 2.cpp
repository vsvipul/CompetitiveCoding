#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,tmp;
	cin>>n;
	int in=0,out=0;
	while (n--)
	{
		cin>>tmp;
		if (tmp>=10 && tmp<=20)
			in++;
		else
			out++;
	}
	cout<<in<<" in\n";
	cout<<out<<" out\n";
	return 0;
}
