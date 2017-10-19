#include <bits/stdc++.h>
#define PI 3.14159
using namespace std;

int main()
{
	int h1,m1,h2,m2;
	while (1)
	{
		cin>>h1>>m1>>h2>>m2;
		if (h1==0 && h2==0 && m1==0 && m2==0)
			break;
		int a=h1*60+m1;
		int b=h2*60+m2;
		if (a>b)
			b+=1440;
		cout<<b-a<<endl;
	}
	return 0;
}
