#include <bits/stdc++.h>
using namespace std;

long long int phi[10000001];
void sieve()
{
    int i,j;
    for (i=1;i<10000001;i++)
        phi[i]=i;
    for (i=2;i<10000001;i++)
    {
        if (phi[i]==i)
        {
            for (j=i;j<10000001;j+=i)
            {
                phi[j]/=i;
                phi[j]*=i-1;
            }
        }
    }
    for (i=2;i<10000001;i++)
        phi[i]+=phi[i-1];
}

int main()
{
    ios_base::sync_with_stdio(false);
    sieve();
    int n,t;
    cin>>t;
    while (t--)
    {
        cin>>n;
        cout<<phi[n]<<'\n';
    }
    return 0;
}
