#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,x,y,q,i,j,idx,k;
    cin>>n>>m;
    int arr[2001][2001];
    for (i=0;i<2001;i++)
    {
        for (j=0;j<2001;j++)
        {
            arr[i][j]=0;
        }
    }
    while (m--)
    {
        cin>>x>>y;
        arr[x][y]++;
    }
    cin>>q;
    while (q--)
    {
        int res=0;
        cin>>idx>>k;
        for (i=0;i<2001;i++)
        {
            if (arr[i][idx]>k)
                res++;
        }
        cout<<res<<endl;
    }
    return 0;
}
