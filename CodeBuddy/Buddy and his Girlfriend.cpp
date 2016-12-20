#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        long long int arr[n][m];
        int i,j;
        long long int res=0,min=LLONG_MAX;
        for (i=0;i<n;i++)
        {
            for (j=0;j<m;j++)
            {
                cin>>arr[i][j];
                if (arr[i][j]<min)
                    min=arr[i][j];
            }
            if (min>res)
                res=min;
            min=LLONG_MAX;
        }
        cout<<res<<endl;
    }
    return 0;
}
