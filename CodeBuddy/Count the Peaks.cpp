#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,peaks=0;
    cin>>n>>m;
    int arr[n+2][m+2];
    int i,j;
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=m;j++)
            cin>>arr[i][j];
    }
    for (i=0;i<n+2;i++)
    {
        arr[i][0]=INT_MIN;
        arr[i][m+1]=INT_MIN;
    }
    for (i=0;i<m+2;i++)
    {
        arr[0][i]=INT_MIN;
        arr[n+1][i]=INT_MIN;
    }
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=m;j++)
        {
            if ((arr[i][j]>=arr[i-1][j+1])&&(arr[i][j]>=arr[i][j+1])&&(arr[i][j]>=arr[i+1][j+1])&&(arr[i][j]>=arr[i-1][j])&&(arr[i][j]>=arr[i+1][j])&&(arr[i][j]>=arr[i-1][j-1])&&(arr[i][j]>=arr[i][j-1])&&(arr[i][j]>=arr[i+1][j-1]))
                peaks++;
        }
    }
    cout<<peaks;
    return 0;
}
