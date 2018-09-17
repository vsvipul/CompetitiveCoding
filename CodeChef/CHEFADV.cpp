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
		int n,m,x,y;
		cin>>n>>m>>x>>y;
		int f=0;
		int a=n-1,b=m-1;
		if ((!(a%x))&&(!(b%y)))
			f=1;
		if (a>0 && b>0)
		{
			a--;b--;
			if ((!(a%x))&&(!(b%y)))
				f=1;
		}
		if (f)
			cout<<"Chefirnemo\n";
		else
			cout<<"Pofik\n";
	}
    return 0;
}
