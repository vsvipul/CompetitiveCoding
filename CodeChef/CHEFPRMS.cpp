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

#define N 1000
vi divisor[N+1];
bool isprime[N+1];
void sieve()
{
	int i,j;
    for(i = 1; i <= N; i++)
	{
        for(j = i; j <= N; j += i)
		{
        	divisor[j].pb(i);
		}
    }
}

void tsieve()
{
	int i,j;
	memset(isprime,true,sizeof(isprime));
	for (i=2;i<=N;i++)
	{
		if (isprime[i]==true)
		{
			for (j=2*i;j<=N;j+=i)
				isprime[j]=false;
		}
	}
}

bool issemiprime(int n)
{
	if (divisor[n].size()==4 && isprime[divisor[n][1]] && isprime[divisor[n][2]])
		return true;
	return false;
}

int main()
{
	tsieve();
	sieve();
	FI;
	T
	{
		int n,i,f=0;
		cin>>n;
		for (i=0;i<=n;i++)
		{
			if (issemiprime(i) && issemiprime(n-i))
			{
				f=1;
				break;
			}
		}
		if (f)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
    return 0;
}
