#include <bits/stdc++.h>
using namespace std;

long long int fnc(long long int n)
{
	if (n%4==0) 
		return ((n/2)-1);
	else if (n%4==1 || n%4==3)
		return n/2;
	else if (n%4==2)
		return ((n/2)-2);
	return 0;
}

int main()
{
	int t;
	long long int n;
	cin>>t;
	while (t--)
	{
		cin>>n;
		cout<<fnc(n)<<'\n';
	}
  return 0;
}
