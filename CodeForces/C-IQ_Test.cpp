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

int main()
{
	fi;
	int n,i,tmp;
	cin>>n;
	int arr[n];
	for (i=0;i<n;i++)
	{
		cin>>tmp;
		arr[i]=tmp%2;
	}
	for (i=0;i<n;i++)
	{
		if (i==0)
		{	
			if (arr[i]!=arr[i+1] && arr[i]!=arr[i+2])
			{
				cout<<i+1;
				break;
			}
		}
		else if (i==n-1)
		{
			if (arr[i]!=arr[i-1] && arr[i]!=arr[i-2])
			{
				cout<<i+1;
				break;
			}
		}
		else
		{
			if (arr[i]!=arr[i-1] && arr[i]!=arr[i+1])
			{
				cout<<i+1;
				break;
			}
		}
	}	
    return 0;
}
