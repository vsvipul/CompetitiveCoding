#include <bits/stdc++.h>
#define MOD 29009933
using namespace std;

int main()
{
	int i;
	long long int v[100000];
	v[0]=1;
	for (i=1;i<100000;i++)
		v[i]=(v[i-1]+(i+1));
	int n;
	cin>>n;
	int f=0;
	for (i=0;i<100000;i++)
	{
		if ((binary_search(v,v+100000,n-v[i])))
			f=1;
	}
	if (f)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}