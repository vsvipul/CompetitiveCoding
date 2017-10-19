#include <bits/stdc++.h>
#define ull unsigned long long int
using namespace std;

ull fnc(int n)
{
	int i;
	ull x=1,y=0;
	for (i=0;i<n;i++)
	{
		y+=x;
		x<<=1;
	}
	return y/12000;
}

int main()
{
	int t,n;
	cin>>t;
	while (t--)
	{
		cin>>n;
		cout<<fnc(n)<<" kg\n";
	}	
    return 0;
}
