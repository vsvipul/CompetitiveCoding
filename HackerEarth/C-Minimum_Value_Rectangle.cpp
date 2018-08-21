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
	T
	{
		unordered_map <int, int> m;
		int n,i;
		cin>>n;
		vi a(n);
		rep(i,0,n)
		{
			cin>>a[i];
			m[a[i]]++;
		}
		vi b;
		for (auto it:m)
		{
			for (i=0;i<it.S/2;i++)
			{
				b.pb(it.F);
			}
		}
		sort(all(b));
		pair <int,int> ans;
		ans=make_pair(b[0],b[1]);
		long double res=(double(b[0]))/b[1]+double(b[1])/b[0];
		for (i=1;i<b.size()-1;i++)
		{
			double tmp=(double(b[i]))/b[i+1]+double(b[i+1])/b[i];
			if (tmp<res)
			{
				res=tmp;
				ans= make_pair(b[i],b[i+1]);
			}
		}
		cout<<ans.F<<" "<<ans.F<<" "<<ans.S<<" "<<ans.S<<endl;
	}	
    return 0;
}
