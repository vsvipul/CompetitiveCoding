#include <bits/stdc++.h>
#define vi vector <int>
#define pb push_back
#define ll long long int
#define vl vector <ll>
#define fi cin.tie(NULL);ios_base::sync_with_stdio(false)
#define T int t; cin>>t; while(t--)
#define s(n) scanf("%d",&n)
#define s2(a,b) scanf("%d%d",&a,&b)
#define s3(a,b,c) scanf("%d%d%d",&a,&b,&c)
ll power(ll a, ll n) {ll p = 1;while (n > 0) {if(n%2) {p = p * a;} n >>= 1; a *= a;} return p;}
ll power(ll a, ll n, ll mod) {ll p = 1;while (n > 0) {if(n%2) {p = p * a; p %= mod;} n >>= 1; a *= a; a %= mod;} return p % mod;}
using namespace std;

int main()
{
	fi;
	int a,b,c,d,e,f,n;
	cin>>a>>b>>c>>d>>e>>f>>n;
	int cups=a+b+c;
	int medals=d+e+f;
	n-=cups/5;
	if (cups%5)
		n--;
	n-=medals/10;
	if (medals%10)
		n--;
	if (n<0)
		cout<<"NO";
	else
		cout<<"YES";
    return 0;
}
