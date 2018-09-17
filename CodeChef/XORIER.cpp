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
	T{
		int n,i;
		ll tmp,oc=0,ec=0,x1=0,x2=0;
		cin>>n;
		vll o;
		vll e;
		vll::iterator it;
		map <ll,ll> m;
		rep(i,0,n)
		{
			cin>>tmp;
			if (tmp%2)
			{
				oc++;
				o.pb(tmp);
			}
			else
			{
				ec++;
				e.pb(tmp);
			}
			m[tmp]++;
		}
		ll res=((ll)(n)*(ll)(n-1))/2;
		sort(all(o));
		sort(all(e));
		for (i=0;i<oc;i++)
		{
			it=o.begin()+i;
			if (binary_search(it,o.end(),(o[i])^2))
				x1+=m[(o[i])^2];
		}
		for (i=0;i<ec;i++)
		{
			it=e.begin()+i;
			if (binary_search(it,e.end(),(e[i])^2))
				x2+=m[(e[i])^2];
		}
		res-=x1;
		res-=x2;
		for (auto i:m)
		{
			if (i.second>1)
				res-=((i.second)*(i.second-1))/2;
		}
		res-=oc*ec;
	//	cout<<x1<<" "<<x2<<" "<<x3<<" "<<oc<<" "<<ec<<" ";
		cout<<res<<"\n";
	}
    return 0;
}
// 1 3 5
