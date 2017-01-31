
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int arr[1001][1001]={0};
    int n,i,j,x1,x2,y1,y2,res=0;
    cin>>n;
    while (n--)
    {
        cin>>x1>>y1>>x2>>y2;
        for (i=x1;i<x2;i++)
        {
            for (j=y1;j<y2;j++)
            {
                arr[i][j]=1;
            }
        }
    }
    for (i=0;i<1001;i++)
    {
        for (j=0;j<1001;j++)
        {
            if (arr[i][j]==1)
                res++;
        }
    }
    cout<<res<<'\n';
    return 0;
}
