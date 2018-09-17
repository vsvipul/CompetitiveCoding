#include <bits/stdc++.h>

#define vi vector <int>
#define pb push_back
#define mp make_pair
#define ll long long
#define vll vector <ll>
#define vi vector <int>
#define ii pair<int,int>
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
	int n;
	cin>>n;
	vi v(n);
	rep(i,0,n)
		cin>>v[i];
	int len=1,mxl=1;
	rep(i,1,n)
	{
		if (v[i]>=v[i-1])
			len++;
		else
		{
			if (mxl<len)
				mxl=len;
			len=1;
		}
	}
	if (mxl<len)
		mxl=len;
	cout<<mxl;
    return 0;
}