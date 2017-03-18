#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q,x,y,n,m,i,j;
    cin>>n>>m;
    int arr[n+1][m+1];
    memset(arr,0,sizeof(arr));
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=m;j++)
        {
            cin>>arr[i][j];
            arr[i][j]+=arr[i-1][j]+arr[i][j-1]-arr[i-1][j-1];
        }
    }
    cin>>q;
    while (q--)
    {
        cin>>x>>y;
        cout<<arr[x][y]<<"\n";
    }
    return 0;
}
