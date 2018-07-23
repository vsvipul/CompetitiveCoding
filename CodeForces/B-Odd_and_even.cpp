#include <bits/stdc++.h>
#define vi vector <int>
#define pb push_back
#define ll long long int
#define vll vector <ll>
#define vl vector <ll>
#define fi cin.tie(NULL);ios_base::sync_with_stdio(false)
#define T int t; cin>>t; while(t--)
ll power(ll a, ll n) {ll p = 1;while (n > 0) {if(n%2) {p = p * a;} n >>= 1; a *= a;} return p;}
ll power(ll a, ll n, ll mod) {ll p = 1;while (n > 0) {if(n%2) {p = p * a; p %= mod;} n >>= 1; a *= a; a %= mod;} return p % mod;}
using namespace std;

int main()
{
	int tmp,i,n,m,odd=0,even=0,zer=0;
	cin>>n>>m;
	for (i=0;i<n;i++)
	{
		cin>>tmp;
		if (tmp%2)
			odd++;
		else
			even++;
		if (tmp==0)
			zer++;
	}
	ll res=1;
	for (i=0;i<m;i++)
	{
		if (i==0)
			res*=(even-zer);
		else if (i%2)
			res*=odd;
		else
			res*=even;
	}
	cout<<res;
    return 0;
}
