#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,n;
	cin>>t;
	while (t--)
	{
		cin>>n;
		if (n==0)
			cout<<"NULL\n";
		else if (n%2==0)
		{
			cout<<"EVEN ";
			if (n<0)
				cout<<"NEGATIVE\n";
			else
				cout<<"POSITIVE\n";
		}
		else
		{
			cout<<"ODD ";
			if (n<0)
				cout<<"NEGATIVE\n";
			else
				cout<<"POSITIVE\n";

		}
	}
    return 0;
}
