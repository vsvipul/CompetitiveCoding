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
	FI;
	T
	{
		int n,k,i,tmp;
		cin>>n>>k;
		vi a,b;
		int suma=0,sumb=0;
		for (i=0;i<n;i++)
		{
			cin>>tmp;
			if (i%2==0)
			{
				a.pb(tmp);
				suma+=tmp;
			}
			else
			{
				b.pb(tmp);
				sumb+=tmp;
			}
		}
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
		int las=a.size()-1;
		int beg=0;
		while (k--)
		{
			if (las<0 || beg>=b.size())
				break;
			if (a[las]>b[beg])
			{
				suma+=(b[beg]-a[las]);
				sumb-=(b[beg]-a[las]);
				las--;
				beg++;
			}
			else
				break;
		}
		if (suma>=sumb)
			cout<<"NO\n";
		else
			cout<<"YES\n";
	}
    return 0;
}
