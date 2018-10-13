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
#define endl '\n';
#define rep(i,a,b) for (int i=a;i<b;i++)
 
ll power(ll a, ll n) {ll p = 1;while (n > 0) {if(n%2) {p = p * a;} n >>= 1; a *= a;} return p;}
ll power(ll a, ll n, ll mod) {ll p = 1;while (n > 0) {if(n%2) {p = p * a; p %= mod;} n >>= 1; a *= a; a %= mod;} return p % mod;}
using namespace std;
 
int main()
{
	int n,m,a,b,c;
	char a1,b1,c1;
	int f=1;
	scanf("%d %d %c %d %c %d %c %d",&n,&a,&a1,&b,&b1,&c,&c1,&m);
	char str[n+1];
	while (m--)
	{
		scanf(" %s",str);
		if (str[a]==a1 && str[b]==b1 && str[c]==c1)
		{
			f=0;
			printf("%s\n",str);
		}
	}
	if (f)
		printf("-1\n");
    return 0;
}
