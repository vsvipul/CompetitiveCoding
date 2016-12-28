#include <bits/stdc++.h>
using namespace std;

long long int phi[1000001];
void sieve()
{
    int i,j;
    phi[1]=1;
    for (i=2;i<1000001;i++)
        phi[i]=i;
    for (i=2;i<1000001;i++)
    {
        if (phi[i]==i)
        {
            for (j=i;j<1000001;j+=i)
            {
                phi[j]/=i;
                phi[j]*=(i-1);
            }
        }
    }
    for (i=2;i<1000001;i++)
    {
        phi[i]*=phi[i];
    }
    for (i=2;i<1000001;i++)
    {
        phi[i]+=phi[i-1];
    }
}

int main()
{
    int t,a,j,b;
    cin>>t;
    sieve();
    for (j=1;j<=t;j++)
    {
        cin>>a>>b;
        cout<<"Case "<<j<<": "<<phi[b]-phi[a-1]<<endl;
    }
    return 0;
}
