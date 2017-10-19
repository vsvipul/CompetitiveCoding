#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i,c=0;
	double tmp,sum=0;
	for (i=0;i<6;i++)
	{
		cin>>tmp;
		if (tmp>0)
		{
			c++;
			sum+=tmp;
		}
	}
	cout<<c<<" valores positivos\n";
	if (c!=0)
		cout<<fixed<<setprecision(1)<<sum/c<<"\n";
	else
		cout<<"0\n";
	return 0;
}
