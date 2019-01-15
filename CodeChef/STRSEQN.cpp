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

#define MOD 1000000007

int main()
{
	FI;
	string a,b;
	int i,res=1;
	cin>>a>>b;
	vector <int> pos[200];
	vector <int>::iterator it;
	for (i=0;i<a.length();i++)
	{
		pos[a[i]].pb(i);
	}
	int idx=-1;
	for (i=0;i<b.length();i++)
	{
		if (pos[b[i]].size()==0)
		{
			cout<<"-1\n";
			return 0;
		}
		it= upper_bound(all(pos[b[i]]), idx);
		if (it==pos[b[i]].end())
		{
			res++;
			idx=pos[b[i]][0];
		}
		else
		{
			idx=*it;
		}
	}
	cout<<res<<"\n";
    return 0;
}
