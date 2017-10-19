#include <bits/stdc++.h>
#define EPS 1e-4
using namespace std;

double fnc(double mid, int arr[], int n)
{
	double res=0;
	int i;
	for (i=n-1;i>=0;i--)
	{
		if (mid>=arr[i])
			return res;
		res+=(double) arr[i]-mid;
	}
	return res;
}

double bsearch(int n, int a, int arr[])
{
	double tmp,lo=0,hi=arr[n-1],mid;
	while (lo<=hi)
	{
		mid=(lo+hi)/2.0;
		tmp=fnc(mid,arr,n);
		if (abs(tmp-(double)a)<EPS)
			return mid;
		if (tmp<a)
			hi=mid;
		else
			lo=mid;
	}
}

int main()
{
	int i,n,a;
	while (1)
	{
		cin>>n>>a;
		if (a==0 && n==0)
			break;
		int total=0,arr[n];
		for (i=0;i<n;i++)
		{
			cin>>arr[i];
			total+=arr[i];
		}
		if (total<a)
			cout<<"-.-\n";
		else if (total==a)
			cout<<":D\n";
		else
		{
			sort(arr,arr+n);
			cout<<fixed<<setprecision(4)<<bsearch(n,a,arr)<<'\n';
		}
	}
    return 0;
}
