#include <bits/stdc++.h>
#define ull unsigned long long int
using namespace std;

ull fnc(int m, int n)
{
	ull a=1,b=1;
	int i;
	for (i=m;i>0;i--)
		a*=i;
	for (i=n;i>0;i--)
		b*=i;
	return a+b;
}

int main()
{
	int m,n;
	while (cin>>m>>n)
	{
		cout<<fnc(m,n)<<endl;
	}
    return 0;
}