#include <bits/stdc++.h>
using namespace std;

void fnc(unsigned long long int n)
{
	string str="";
	while (n>0)
	{
		if (n%32>=10)
			str+=char('A'+n%32-10);
		else
			str+=char('0'+n%32);
		n/=32;
	}
	reverse(str.begin(),str.end());
	cout<<str<<"\n";
}

int main()
{
	unsigned long long int n;
	while (cin>>n)
	{
		if (n==0)
		{
			cout<<"0\n";
			break;
		}
		fnc(n);
	}
}
