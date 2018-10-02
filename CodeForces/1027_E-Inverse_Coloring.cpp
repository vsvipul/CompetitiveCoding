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
const int MOD = 998244353;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n;cin>>n;
	int K,k;cin>>K;
	k = min(K,n);
	vector<ll> dp(k+1);
	for(int i=1;i<=k;i++)
	{
		vector<vi> dptemp(n+1,vi(i+1,0));
		dptemp[1][1]=1;
		for(int j=2;j<=n;j++)
		{
			ll sum=dptemp[j-1][1];
			for(int l=2;l<=min(j,i);l++)
			{
				dptemp[j][l]=dptemp[j-1][l-1];
				sum = (sum+dptemp[j-1][l])%MOD;
			}
			dptemp[j][1]=sum;
		}
		
		ll sum=0;
		for(int j=1;j<=i;j++)
		{
			sum = (sum+dptemp[n][j])%MOD;
		}
		dp[i]=sum;
	}
//	for(int i=1;i<=k;i++)
//		cout<<dp[i]<<" ";
//	cout<<endl;
	vector<ll> dpelem(k+2);
	ll ans=0;
	dpelem[1]=dp[1];
	for(int i=2;i<=k;i++)
	{
		dpelem[i]=(dp[i]-dp[i-1]+MOD)%MOD;
//		cout<<dpelem[i]<<" ";
	}

	for(int i=1;i<=min(n,K-1);i++)
	{
		ans = ans+((ll)dpelem[i]*dp[min((K-1)/i,n)])%MOD;
//		cout<<dpelem[i]<<" "<<dp[min((K-1)/i,n)]<<endl;
		ans%=MOD;
	}
	cout<<(2*ans)%MOD<<endl;
	return 0;
}
/*
	Two roads diverged in a wood, and I—
	I took the one less traveled by,
	And that has made all the difference.
*/