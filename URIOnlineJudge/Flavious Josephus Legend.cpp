#include <bits/stdc++.h>
#define PI 3.14159
using namespace std;

int fnc(int n, int k)
{
	if (n==1)
		return 1;
	return (fnc(n-1,k)+k-1)%n +1;
}

int main()
{
	int t,n,k,i;
	cin>>t;
	for (i=1;i<=t;i++)
	{
		cin>>n>>k;
		cout<<"Case "<<i<<": "<<fnc(n,k)<<endl;
	}
	return 0;
}
