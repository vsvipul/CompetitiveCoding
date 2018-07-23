#include <bits/stdc++.h>
#define vi vector <int>
#define pb push_back
#define ll long long int
#define vll vector <ll>
#define vl vector <ll>
#define fi cin.tie(NULL);ios_base::sync_with_stdio(false)
#define T int t; cin>>t; while(t--)
ll power(ll a, ll n) {ll p = 1;while (n > 0) {if(n%2) {p = p * a;} n >>= 1; a *= a;} return p;}
ll power(ll a, ll n, ll mod) {ll p = 1;while (n > 0) {if(n%2) {p = p * a; p %= mod;} n >>= 1; a *= a; a %= mod;} return p % mod;}
using namespace std;

int main()
{
	fi;
	int i,n,tmp,sum=0;
	cin>>n;
	int arr[n];
	for (i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	for (i=0;i<n;i++)
	{
		sum+=(n-i)*arr[i];
	}
	cout<<sum;
    return 0;
}
