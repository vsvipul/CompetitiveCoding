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
	t
	{
		string str;
		cin>>str;
		int arr[str.length()];
		int i;
		string alpha="zabcdefghijklmnopqrstuvwxyz";
		for (i=0;i<str.length();i++)
		{
			arr[i]=(int) (str[i]-'a'+1);
			arr[i]+=(int) (str[str.length()-i-1]-'a'+1);
			arr[i]%=26;
			cout<<alpha[arr[i]];
		}
		cout<<"\n";
	}
    return 0;
}
