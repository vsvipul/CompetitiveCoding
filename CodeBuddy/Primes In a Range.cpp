#include <bits/stdc++.h>
using namespace std;

bool isPrime[100001];
void sieve()
{
    memset(isPrime,true,sizeof(isPrime));
    int i,j;
    isPrime[1]=false;
    for (i=2;i*i<100001;i++)
    {
        if (isPrime[i]==true)
        {
            for (j=i*2;j<100001;j+=i)
            {
                isPrime[j]=false;
            }
        }
    }
}

int main()
{
    int t,l,i,r,res;
    cin>>t;
    sieve();
    while (t--)
    {
        cin>>l>>r;
        res=0;
        for (i=l;i<=r;i++)
        {
            if (isPrime[i]==true)
                res++;
        }
        cout<<res<<endl;
    }
    return 0;
}
