#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,i,f;
	cin>>t;
	while (t--)
	{
		f=0;
		cin>>n;
		for (i=2;i*i<=n;i++)
		{
			if (n%i==0)
			{
				f=1;
				break;
			}
		}
		if (f)
			cout<<"Not Prime\n";
		else
			cout<<"Prime\n";
	}
    return 0;
}