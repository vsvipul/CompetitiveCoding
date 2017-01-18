#include <bits/stdc++.h>
using namespace std;

int lucky[100001];
int store[1001];
void sieve()
{
    memset(lucky,0,sizeof(lucky));
    memset(store,0,sizeof(store));
    int i,j;
    for (i=2;i<100001;i++)
    {
        if (lucky[i]==0)
        {
            for (j=2*i;j<100001;j+=i)
            {
                lucky[j]++;
            }
        }
    }
    j=0;
    for (i=2;i<100001,j<1001;i++)
    {
        if (lucky[i]>=3)
        {
            store[j]=i;
            j++;
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
        cout<<store[n-1]<<endl;
    }
    return 0;
}
