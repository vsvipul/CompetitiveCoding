#include <bits/stdc++.h>
#define vi vector <int>
#define pb push_back
#define ll long long int
#define vll vector <ll>
#define vi vector <int>
#define all(a) (a).begin(),(a).end()
#define fi cin.tie(NULL);ios_base::sync_with_stdio(false)
#define T int t; cin>>t; while(t--)
ll power(ll a, ll n) {ll p = 1;while (n > 0) {if(n%2) {p = p * a;} n >>= 1; a *= a;} return p;}
ll power(ll a, ll n, ll mod) {ll p = 1;while (n > 0) {if(n%2) {p = p * a; p %= mod;} n >>= 1; a *= a; a %= mod;} return p % mod;}
using namespace std;

int main()
{
	fi;
	ll a,b;
	cin>>a>>b;
	if (b>a)
	{
		ll c=b-a;
		ll numcount=a-c+1;
		if (!(b%2) && b/2<=a)
			numcount--;
		numcount/=2;
		if (numcount<=0)
			cout<<"0\n";
		else
			cout<<numcount<<"\n";
	}
	else
	{
		ll numcount=b;
		numcount/=2;
		if (!(b%2) && b/2<=a)
			numcount--;
		if (numcount<=0)
			cout<<"0\n";
		else
			cout<<numcount<<"\n";
	}
    return 0;
}
