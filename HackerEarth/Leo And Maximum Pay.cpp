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

class mov
{
public:
	ll s,e,p;
};

bool operator<(mov const & a, mov const & b)
{
    return (a.e < b.e);
}

int lastNonConflict(mov arr[], int i)
{
	ll low=0,high=i-1;
	while (low<=high)
	{
		ll mid=(low+high)/2;
		if (arr[mid].e<=arr[i].s)
		{
			if (arr[mid+1].e<=arr[i].s)
				low=mid+1;
			else
				return mid;
		}
		else
			high=mid-1;
	}
    return -1;
}

ll dp[10005];
ll compRes(mov arr[], int n)
{
	if (n==0)
		return arr[0].p;
	else if (dp[n])
		return dp[n];
	else
	{
		ll incprofit=arr[n].p;
		// cout<<incprofit<<endl;
		int las=lastNonConflict(arr,n);
		if (las!=-1)
			incprofit+=compRes(arr,las);
		dp[n]=max(incprofit, compRes(arr,n-1));
		return dp[n];
	}
}

int main()
{
	FI;
	T
	{
		memset(dp,0,sizeof(dp));
		int n,i;
		cin>>n;
		mov arr[n];
		for (i=0;i<n;i++)
			cin>>arr[i].s>>arr[i].e>>arr[i].p;
		sort(arr,arr+n);
		cout<<compRes(arr,n-1)<<"\n";
	}
    return 0;
}
