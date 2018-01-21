#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int square[1005];
void pre()
{
	int i;
	for (i=0;i<1005;i++)
		square[i]=i*i;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	pre();
	int n,i,res;
	cin>>n;
	int arr[n];
	for (i=0;i<n;i++)
		cin>>arr[i];
	sort(arr,arr+n);
	for (i=n-1;i>=0;i--)
	{
		if (!binary_search(square,square+1005,arr[i]))
		{
			res=arr[i];
			break;
		}
	}
	cout<<res<<"\n";
	return 0;
}
