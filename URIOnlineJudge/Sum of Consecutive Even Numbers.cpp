#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int x;
	while (cin>>x && x!=0)
	{
		if (x%2)
		{
			cout<<5*x+25<<endl;
		}
		else
		{
			cout<<5*x+20<<endl;
		}
	}
    return 0;
}
