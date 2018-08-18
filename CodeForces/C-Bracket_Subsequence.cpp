#include <bits/stdc++.h>
#define vi vector <int>
#define pb push_back
#define ll long long int
#define vll vector <ll>
#define vi vector <int>
#define fi cin.tie(NULL);ios_base::sync_with_stdio(false)
#define T int t; cin>>t; while(t--)
ll power(ll a, ll n) {ll p = 1;while (n > 0) {if(n%2) {p = p * a;} n >>= 1; a *= a;} return p;}
ll power(ll a, ll n, ll mod) {ll p = 1;while (n > 0) {if(n%2) {p = p * a; p %= mod;} n >>= 1; a *= a; a %= mod;} return p % mod;}
using namespace std;

int main()
{
	fi;
	int a,b,i,tmp;
	cin>>a>>b;
	string str;
	int num[a];
	memset(num,0,sizeof(num));
	cin>>str;
	stack <int> s;
	for (i=0;i<a;i++)
	{
		if (str[i]=='(')
			s.push(i);
		else
		{
			tmp=s.top();
			s.pop();
			num[tmp]=1;
			num[i]=1;
			b-=2;
		}
		if (b==0)
			break;
	}
	for (i=0;i<a;i++)
	{
		if (num[i]==1)
			cout<<str[i];
	}
    return 0;
}
