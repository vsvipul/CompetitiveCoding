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
	T{
		ll res=0;
		int n,i;
		cin>>n;
		string str;
		cin>>str;
		int tmp[n];
		memset(tmp,0,sizeof(tmp));
		if (str[n-1]=='b')
			tmp[n-1]=0;
		else
			tmp[n-1]=1;
		for (i=n-2;i>=0;i--)
		{
			tmp[i]=tmp[i+1];
			if (str[i]=='a')
				tmp[i]++;
		}
		for (i=0;i<n;i++)
		{
			if (str[i]=='b')
				res+=tmp[i];
		}
		cout<<res<<"\n";
	}
    return 0;
}
