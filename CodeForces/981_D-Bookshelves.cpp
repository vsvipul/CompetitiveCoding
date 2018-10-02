#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
typedef pair<ii,int> iii;
typedef vector<iii> viii;
typedef pair<ll,ll> pll;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef map<int,int> mpii;
typedef map<string,int> mpsi;
typedef set<int> si;
typedef set<ll> sll;
#define pb push_back
#define I insert
#define INF 1000000000
#define LINF (ll)INF*INF
#define all(x) x.begin(),x.end()
#define F first
#define S second
vll a;
int n,k;
bool check(ll mask)
{
	vector<vector<int> > dp(n+1,vi(k+1));
	dp[0][0]=1;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<k;j++)
		{
			if(dp[i][j]==0) continue;
			ll curr=0;
			for(int l=i;l<n;l++)
			{
				curr+=a[l];
				if((curr&mask)==mask)
				{
					dp[l+1][j+1]=1;
				}	
			}
		}
	}
	return dp[n][k];
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n>>k;
	a.resize(n);
	for(int i=0;i<n;i++) cin>>a[i];
	ll ans=0;
	for(int i=56;i>=0;i--)
	{
		if(check(ans+(1LL<<i)))
		{
			ans+=(1LL<<i);
		}
	}
	cout<<ans<<endl;
	return 0;
}
/*
	Two roads diverged in a wood, and I—
	I took the one less traveled by,
	And that has made all the difference.
*/