#include <bits/stdc++.h>

#define vi vector <int>
#define pb push_back
#define mp make_pair
#define ll long long
#define vll vector <ll>
#define vi vector <int>
#define pii pair<int,int>
#define all(a) (a).begin(),(a).end()
#define fi cin.tie(NULL);ios_base::sync_with_stdio(false)
#define T int t; cin>>t; while(t--)
#define F first
#define S second
#define sz(x) (int)x.size()
#define endl '\n';
#define rep(i,a,b) for (int i=a;i<b;i++)

ll power(ll a, ll n) {ll p = 1;while (n > 0) {if(n%2) {p = p * a;} n >>= 1; a *= a;} return p;}
ll power(ll a, ll n, ll mod) {ll p = 1;while (n > 0) {if(n%2) {p = p * a; p %= mod;} n >>= 1; a *= a; a %= mod;} return p % mod;}
using namespace std;

int main()
{
	fi;
	ll n,q,res,a,b,x,y;
	cin>>n>>q;
	a = n/2;
	b = n/2 + n%2;
	while (q--)
	{
		cin>>x>>y;
		res=(y+1)/2;
		if ((x+y)%2)
		{
			res+=(n*n)/2 + (n*n)%2;
			res+=(x/2)*a+(x-1-x/2)*b;
		}
		else
			res+=(x/2)*b+(x-1-x/2)*a;
		cout<<res<<endl;
	}
    return 0;
}
