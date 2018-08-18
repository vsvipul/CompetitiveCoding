#include <bits/stdc++.h>
#define vi vector <int>
#define pb push_back
#define ll long long int
#define vll vector <ll>
#define vi vector <int>
#define all(a) (a).begin(),(a).end()
#define fi cin.tie(NULL);ios_base::sync_with_stdio(false)
#define T int t; cin>>t; while(t--)
ll power(ll a, ll n) {ll p = 1;while (n > 0) {if(n%2) {p = p * a;} n >>= 1; a *= a;} return p;}
ll power(ll a, ll n, ll mod) {ll p = 1;while (n > 0) {if(n%2) {p = p * a; p %= mod;} n >>= 1; a *= a; a %= mod;} return p % mod;}
using namespace std;

int main()
{
	fi;
	int i,z,x;
	cin>>z>>x;
	string a,b;
	cin>>a>>b;
	if (count(all(a),'*')==0)
	{
		if (a==b)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	else if (z>x+1)
	{
		cout<<"NO\n";
	}
	else
	{
		int f=1,c=0;
		for (i=0;i<a.length();i++)
		{
			if (a[i]=='*')
			{
				c=1;
				break;
			}
			if (a[i]!=b[i])
			{
				f=0;
				break;
			}
		}
		if (c==1)
		{
			int j=b.length()-1;
			for (i=a.length()-1;i>=0;i--)
			{
				if (a[i]=='*')
				{
					break;
				}
				if (a[i]!=b[j])
				{
					f=0;
					break;
				}
				j--;
			}
		}
		if (f)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
    return 0;
}
