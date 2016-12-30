#include <bits/stdc++.h>
using namespace std;

int phi[1000001];
void sieve()
{
    int i,j;
    for (i=1;i<1000001;i++)
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
}

int main()
{
    int t,n;
    cin>>t;
    sieve();
    while (t--)
    {
        cin>>n;
        cout<<phi[n]<<endl;
    }
    return 0;
}
