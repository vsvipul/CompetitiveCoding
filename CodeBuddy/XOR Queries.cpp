#include <bits/stdc++.h>
using namespace std;

int main() 
{
	std::ios::sync_with_stdio(false);
	int i,n;
	cin>>n;
	long long int arr[n];
	cin>>arr[0];
	for (i=1;i<n;i++)
	{
		cin>>arr[i];
		arr[i]=arr[i]^arr[i-1];
	}
	int q,l,r;
	long long int res;
	cin>>q;
	while (q--)
	{
		cin>>l>>r;
		if (l==1)
			res=(long long int) arr[r-1];
		else
			res=(long long int) (arr[r-1]^arr[l-2]);
		cout<<res<<endl;
	}
	return 0;
}
