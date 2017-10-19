#include <bits/stdc++.h>
#define PI 3.14159
using namespace std;

int main()
{
	int i,a[5],b[5],f=0;
	for (i=0;i<5;i++)
		cin>>a[i];
	for (i=0;i<5;i++)
		cin>>b[i];
	for (i=0;i<5;i++)
	{
		if (a[i]==b[i])
		{
			f=1;break;
		}
	}
	if (f)	cout<<"N\n";
	else	cout<<"Y\n";
	return 0;
}
