#include <bits/stdc++.h>
using namespace std;

int main()
{
    int res,a,b,c,d,i,j,n,m,q,tmp,cumu;
    scanf("%d%d%d",&n,&m,&q);
    int arr[n][m];
    for (i=0;i<n;i++)
    {
        cumu=0;
        for (j=0;j<m;j++)
        {
            scanf("%d",&tmp);
            cumu+=tmp;
            arr[i][j]=cumu;
        }
    }
    for (i=0;i<m;i++)
    {
        for (j=1;j<n;j++)
            arr[j][i]+=arr[j-1][i];
    }
    while (q--)
    {
        res=0;
        scanf("%d%d%d%d",&a,&b,&c,&d);
        a--;b--;c--;d--;
        if (a==0 && b==0)
            res=arr[c][d];
        else if (a==0)
            res=arr[c][d]-arr[c][b-1];
        else if (b==0)
            res=arr[c][d]-arr[a-1][d];
        else
            res=arr[c][d]-arr[a-1][d]-arr[c][b-1]+arr[a-1][b-1];
        printf("%d\n",res);
    }
    return 0;
}
