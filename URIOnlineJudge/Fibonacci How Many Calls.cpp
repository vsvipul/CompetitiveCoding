#include <bits/stdc++.h>
using namespace std;

int calls=0;

int fib(int n)
{
	if (n==0)
	{
		return 0;
	}
	if (n==1)
	{
		return 1;
	}
	calls+=2;
	return fib(n-1)+fib(n-2);
}

int main()
{
	int t,n,res;
	cin>>t;
	while (t--)
	{
		cin>>n;
		res=fib(n);
		cout<<"fib("<<n<<") = "<<calls<<" calls = "<<res<<endl;
		calls=0;
	}
	return 0;
}
