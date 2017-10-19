#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	double x;
	cin>>t;
	while (t--)
	{
		cin>>x;
		int days=0;
		while (x>1)
		{
			x/=2;
			days++;
		}		
		cout<<days<<" dias\n";
	}	
    return 0;
}