#include <bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
    if (n==0||n==1)
        return false;
	int i;
	bool isaprime=true;
	for (i=2;i*i<=n;i++)
	{
		if (n%i==0)
			isaprime=false;
	}
	return isaprime;
}

int main()
{
	int n,a=INT_MAX,b=INT_MAX,i;
	cin>>n;
	i=n;
	while (i>0)
	{
		if (isprime(i))
		{
		    a=i;
			break;
		}
		i--;
	}
	i=n;
	while (i<INT_MAX)
	{
		if (isprime(i))
		{
		    b=i;
			break;
		}
		i++;
	}
	cout<<min(abs(n-a),abs(n-b));
	return 0;
}
