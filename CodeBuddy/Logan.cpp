#include <bits/stdc++.h>
using namespace std;

int countbits(int n)
{
	int i,res=0;
	while (n!=0)
	{
		if (n&1)
			res++;
		n>>=1;
	}
	return res;
}

int main()
{
	int t,n;
	cin>>t;
	while (t--)
	{
		cin>>n;
		if (countbits(n)==1)
			cout<<log2(n)<<"\n";
		else
			cout<<(int) log2(n)+1<<"\n";
	}
}
