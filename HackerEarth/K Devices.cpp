#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int n,k,i,tmp;
	cin>>n>>k;
	long long int x[n],y[n];
	for (i=0;i<n;i++)
		cin>>x[i];
	for (i=0;i<n;i++)
		cin>>y[i];
	vector <long long int> v;
	for (i=0;i<n;i++)
	{
		tmp=(x[i]*x[i]) + (y[i]*y[i]);
		v.push_back(tmp);
	}
	sort(v.begin(),v.end());
	cout<<ceil(sqrt(v[k-1]));
}
