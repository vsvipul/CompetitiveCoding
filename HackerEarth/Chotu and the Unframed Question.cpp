#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,m,i,j,c;
    long long int res;
    cin>>t;
    while (t--)
    {
        cin>>n>>m;
        int arr[n][m];
        for (i=0;i<n;i++)
        {
            for (j=0;j<m;j++)
                cin>>arr[i][j];
        }
        c=1;res=arr[0][0];i=0;j=0;
        while (c<n*m)
        {
            if (i==0)
            {
                j++;
                if (i<n && j<m)
                {
                    c++;res+=c*arr[i][j];
                }
                while (c<n*m && j>0)
                {
                    j--;i++;
                    if (i<n && j<m)
                    {
                        c++;res+=c*arr[i][j];
                    }
                }
            }
            if (j==0)
            {
                i++;
                if (i<n && j<m)
                {
                    c++;res+=c*arr[i][j];
                }
                while (c<n*m && i>0)
                {
                    i--;j++;
                    if (i<n && j<m)
                    {
                        c++;res+=c*arr[i][j];
                    }
                }
            }
        }
        cout<<res<<"\n";
    }
}
