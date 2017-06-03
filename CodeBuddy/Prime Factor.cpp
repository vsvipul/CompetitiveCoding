#include <bits/stdc++.h>
using namespace std;

bool isprime[100005];
void sieve()
{
    int i,j;
    memset(isprime,true,sizeof(isprime));
    for (i=2;i<100005;i++)
    {
        if (isprime[i]==true)
        {
            for (j=2*i;j<100001;j+=i)
            {
                isprime[j]=false;
            }
        }
    }
}

void fnc(int n)
{
    int i,pow,tmp;
    for (i=n;i>1;i--)
    {
        if (n%i==0 && isprime[i]==true)
        {
            tmp=n;
            pow=0;
            while (tmp%i==0)
            {
                tmp/=i;
                pow++;
            }
            cout<<i<<"^"<<pow<<",";
        }
    }
    cout<<endl;
}

int main()
{
    sieve();
    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        fnc(n);
    }
    return 0;
}
