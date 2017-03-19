#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll fnc(int arr[], int n)
{
    int i;
    ll dp[n];
    dp[0]=arr[0];
    dp[1]=max(arr[0],arr[1]);
    for (i=2;i<n;i++)
        dp[i]=max(dp[i-1],dp[i-2]+arr[i]);
    return dp[n-1];
}

int main()
{
    int t,n,i,j;
    int arr[10001]={0};
    cin>>t;
    for (j=1;j<=t;j++)
    {
        cin>>n;
        if (n==0)
        {
            cout<<"Case "<<j<<": 0"<<"\n";
            continue;
        }
        for (i=0;i<n;i++)
            cin>>arr[i];
        cout<<"Case "<<j<<": "<<fnc(arr,n)<<"\n";
    }
    return 0;
}
