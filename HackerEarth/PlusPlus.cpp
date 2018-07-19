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

bool fnc(int i, int j, int k, int l)
{
	if (abs(i-k)<2 && abs(j-l)<2)
		return true;
	return false;
}

int main()
{
	fi;
	int n,m,i,j,k,l;
	cin>>n>>m;
	int arr[n][m];
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
	ll max=0;
	for (i=1;i<n-1;i++)
	{
		for (j=1;j<m-1;j++)
		{
			for (k=1;k<n-1;k++)
			{
				for (l=1;l<m-1;l++)
				{
					if (!fnc(i,j,k,l))
						if (((arr[i][j]*arr[k][l])+(arr[i-1][j]*arr[k-1][l])+(arr[i][j-1]*arr[k][l-1])+(arr[i+1][j]*arr[k+1][l])+(arr[i][j+1]*arr[k][l+1]))>max)
							max=((arr[i][j]*arr[k][l])+(arr[i-1][j]*arr[k-1][l])+(arr[i][j-1]*arr[k][l-1])+(arr[i+1][j]*arr[k+1][l])+(arr[i][j+1]*arr[k][l+1]));
				}
			}
		}
	}
	cout<<max<<"\n";
    return 0;
}
