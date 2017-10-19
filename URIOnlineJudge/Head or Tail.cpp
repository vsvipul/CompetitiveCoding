#include <bits/stdc++.h>
#define PI 3.14159
using namespace std;

int main()
{
	int n,t;
	while (1)
	{
		int m=0,j=0;
		cin>>n;
		if (n==0) break;
		while (n--)
		{
			cin>>t;
			if (t)
				j++;
			else
				m++;
		}
		cout<<"Mary won "<<m<<" times and John won "<<j<<" times\n";
	}
	return 0;
}
