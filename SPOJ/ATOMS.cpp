#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t,n,k,m;
    cin>>t;
    while (t--)
    {
    	cin>>n>>k>>m;
    	ll res=0;
    	while (m/k>=n)
    	{
    		n*=k;
   			res++;
    	}
    	cout<<res<<'\n';
    }
    return 0;
}
