#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,m,count;
    cin>>t;
    while (t--)
    {
        count=0;
        cin>>n>>m;
        int i,j,alice[n],berta[m];
        for (i=0;i<n;i++)
            cin>>alice[i];
        for (i=0;i<m;i++)
            cin>>berta[i];
        sort(alice,alice+n);
        sort(berta,berta+m);
        i=0;
        j=0;
        while (i<n && j<m)
        {
            if (alice[i]==berta[j])
            {
                count++;
                i++;
                j++;
            }
            else if (alice[i]<berta[j])
                i++;
            else
                j++;
        }
        cout<<count<<'\n';
    }
    return 0;
}
