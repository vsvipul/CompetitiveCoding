#include <bits/stdc++.h>
using namespace std;

int fact[1000001];
int res[11][1000001];

void sieve()
{
    int i,j;
    memset(fact,0,sizeof(fact));
    memset(res,0,sizeof(res));
    for (i=2;i<1000001;i++)
    {
        if (fact[i]==0)
        {
            for (j=i;j<1000001;j+=i)
            {
                fact[j]++;
            }
        }
    }
    for (i=0;i<11;i++)
    {
        for (j=1;j<1000001;j++)
        {
            if (fact[j]==i)
                res[i][j]=res[i][j-1]+1;
            else
                res[i][j]=res[i][j-1];
        }
    }

}

int main()
{
    int t,a,b,n;
    cin>>t;
    sieve();
    while (t--)
    {
        cin>>a>>b>>n;
        cout<<res[n][b]-res[n][a-1]<<'\n';
    }
    return 0;
}
