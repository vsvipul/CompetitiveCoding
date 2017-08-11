#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
string str;
int n,dp[5005][5005];
 
ll fnc(ll i,ll j)
{
    if (i>j)
    	return 0;
    if (i==j)
    	return 0;
    if (dp[i][j]!=-1)
    	return dp[i][j];
    ll ans=INT_MAX;
    if (j==n-1)
    	ans = fnc(i+1, j) + 1;
    if (str[i]==str[j])
    	ans = min(ans, fnc(i+1, j-1));
    else
    	ans = min(ans, 1+fnc(i+1,j-1));
    return dp[i][j] = ans;
}
 
int main()
{
	cin>>str;
	n=str.size();
	memset(dp,-1,sizeof(dp));
	cout<<fnc(0,n-1)<<endl;
	return 0;
}
