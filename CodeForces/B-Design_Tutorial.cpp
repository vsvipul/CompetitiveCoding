#include <bits/stdc++.h>
#define vi vector <int>
#define pb push_back
#define ll long long int
#define vl vector <ll>
#define fi cin.tie(NULL);ios_base::sync_with_stdio(false)
#define t int t; cin>>t; while(t--)
#define s(n) scanf("%d",&n)
#define s2(a,b) scanf("%d%d",&a,&b)
#define s3(a,b,c) scanf("%d%d%d",&a,&b,&c)
ll power(ll a, ll n) {ll p = 1;while (n > 0) {if(n%2) {p = p * a;} n >>= 1; a *= a;} return p;}
ll power(ll a, ll n, ll mod) {ll p = 1;while (n > 0) {if(n%2) {p = p * a; p %= mod;} n >>= 1; a *= a; a %= mod;} return p % mod;}
using namespace std;

bool isprime[1000005];
void sieve()
{
	memset(isprime,true,sizeof(isprime));
	int i,j;
	for (i=2;i<1000005;i++)
	{
		if (isprime[i])
		{
			for (j=2*i;j<1000005;j+=i)
			{
				isprime[j]=false;
			}
		}
	}
}

int main()
{
	fi;
	int n,i;
	cin>>n;
	sieve();
	for (i=2;i<n;i++)
	{
		if (!isprime[i] && !isprime[n-i])
		{
			cout<<i<<" "<<n-i;
			break;
		}
	}
    return 0;
}
