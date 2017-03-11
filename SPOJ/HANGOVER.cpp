#include <bits/stdc++.h>
using namespace std;

int main()
{
	double n,tmp;
	int res;
	while (1)
	{
		cin>>n;
		if (n==0.00) break;
		tmp=0;res=1;
		while (tmp<n)
		{
			res++;
			tmp+=1.0/res;
		}
		res--;
		cout<<res<<" card(s)\n";
	}
	return 0;
}
