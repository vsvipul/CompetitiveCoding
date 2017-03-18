#include <bits/stdc++.h>
using namespace std;

int fnc(string a, string b)
{
    int i,j,m=a.length(),n=b.length();
    int dp[m+1][n+1];
    memset(dp,0,sizeof(dp));
    for (i=1;i<=m;i++)
        dp[i][0]=i;
    for (i=1;i<=n;i++)
        dp[0][i]=i;
    for (i=1;i<=m;i++)
    {
        for (j=1;j<=n;j++)
        {
            if (a[i-1]==b[j-1]) // no operation for same character
                dp[i][j]=dp[i-1][j-1];
            else                // substitution, insertion and deletion     
                dp[i][j]=1+min(dp[i-1][j-1],min(dp[i][j-1],dp[i-1][j]));
        }
    }
    return dp[m][n];
}

int main() 
{
    int t;
    string a,b;
    cin>>t;
    while (t--)
    {
        cin>>a>>b;
        cout<<fnc(a,b)<<"\n";
    }
    return 0;
}
