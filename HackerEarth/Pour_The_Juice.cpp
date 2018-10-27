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
	int n,w,i;
	cin>>n>>w;
	int arr[n];
	for (i=0;i<n;i++)
		cin>>arr[i];
	int res=0;
	int pre[n],suf[n];
	pre[0]=arr[0];
	suf[n-1]=arr[n-1];
	for (i=1;i<n;i++)
	{
		if (arr[i]>pre[i-1])
			pre[i]=arr[i];
		else
			pre[i]=pre[i-1];
	}
	for (i=n-2;i>=1;i--)
	{
		if (arr[i]>suf[i+1])
			suf[i]=arr[i];
		else
			suf[i]=suf[i+1];
	}
	for (i=1;i<n-1;i++)
	{
// 		cout<<pre[i]<<" "<<arr[i]<<" "<<suf[i]<<" "<<abs(suf[i]-pre[i])-arr[i]<<"\n";
		if (pre[i]>arr[i] && suf[i]>arr[i] && arr[i]<min(suf[i],pre[i]))
			res+=min(suf[i],pre[i])-arr[i];
	}
	cout<<res*w<<"\n";
    return 0;
}
