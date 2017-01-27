#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int t,l,r,i,j,flag;
    cin>>t;
    while (t--)
    {
        cin>>l>>r;
        for (i=l;i<=r;i++)
        {
            flag=0;
            for (j=2;j*j<=i;j++)
            {
                if (i%j==0)
                {
                    flag=1;
                    break;
                }
            }
            if ((flag==0)&&(i!=1))
                cout<<i<<'\n';
        }
        cout<<'\n';
    }
    return 0;
}
