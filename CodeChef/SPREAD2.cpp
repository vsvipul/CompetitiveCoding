#include <bits/stdc++.h>

#define vi vector <int>
#define mii map <int,int>
#define pb push_back
#define mp make_pair
#define ll long long
#define vll vector <ll>
#define vi vector <int>
#define ii pair<int,int>
#define all(a) (a).begin(),(a).end()
#define FI cin.tie(NULL);ios_base::sync_with_stdio(false)
#define T int t; cin>>t; while(t--)
#define F first
#define S second
#define sz(x) (int)x.size()
#define endl '\n'
#define rep(i,a,b) for (int i=a;i<b;i++)

ll power(ll a, ll n) {ll p = 1;while (n > 0) {if(n%2) {p = p * a;} n >>= 1; a *= a;} return p;}
ll power(ll a, ll n, ll mod) {ll p = 1;while (n > 0) {if(n%2) {p = p * a; p %= mod;} n >>= 1; a *= a; a %= mod;} return p % mod;}
using namespace std;

int main()
{
	// FI;
	T
	{
		int n,i,res=1;
		cin>>n;
		vi v(n);
		vll pre(n);
		rep(i,0,n)
		{
			cin>>v[i];
			pre[i]=v[i];
		}
		rep(i,1,n)
			pre[i]+=pre[i-1];
			// rep(i,0,n)
			// {
				// cout<<pre[i]<<" ";
			// }
		// cout<<"\n";
		i=0;
		while (i<n)
		{
			if (pre[i]>=n-i-1)
			{
				cout<<res<<"\n";
				break;
			}
				i+=pre[i];
			res++;
			// cout<<i<<" "<<res<<"\n";
		}
	}
    return 0;
}
