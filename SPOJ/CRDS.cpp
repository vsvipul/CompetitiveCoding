#include <bits/stdc++.h>
#define MOD 1000007
using namespace std;

int main()
{
	int i;
	long long int arr[1000001];
	arr[0]=0;
	arr[1]=2;
	for (i=2; i<1000001; i++)
	{
		arr[i]=arr[i-1]+(2*i)+(i-1);
	}
	int t,n;
	cin>>t;
	while (t--)
	{
		cin>>n;
		cout<<arr[n]%MOD<<'\n';
	}
	return 0;
}
