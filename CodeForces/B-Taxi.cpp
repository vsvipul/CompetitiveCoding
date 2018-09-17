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
	int c1=count(all(v),1);
	int c2=count(all(v),2);
	int c3=count(all(v),3);
	int c4=count(all(v),4);
	int res=0;
	res+=c4;
	res+=c3;
	c1-=c3;
	res+=c2/2;
	if (c2%2)
	{
		c1-=2;
		res++;
	}
	if (c1>0)
	{
		res+=(c1/4);
		if (c1%4)
			res++;
	}
	cout<<res;
    return 0;
}