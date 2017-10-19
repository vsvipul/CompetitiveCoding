#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i,count=0;
	double tmp;
	for (i=0;i<6;i++)
	{
		cin>>tmp;
		if (tmp>0)
			count++;
	}
	cout<<count<<" valores positivos\n";
    return 0;
}