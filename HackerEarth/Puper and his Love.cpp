#include <bits/stdc++.h>
using namespace std;
 
bool isprime[2600001];
void sieve()
{
    int i,j;
    memset(isprime,true,sizeof(isprime));
    for (i=2;i<2600001;i++)
    {
        if (isprime[i]==true)
        {
            for (j=2*i;j<2600001;j+=i)
            {
                isprime[j]=false;
            }
        }
    }
}
 
int main()
{
    sieve();
    int t,n,i,sum;
    string str;
    cin>>t;
    while (t--)
    {
        sum=0;
        cin>>n;
        cin>>str;
        for (i=0;i<n;i++)
            sum+=(str[i]-'0')-48;
        if (isprime[sum])
            cout<<"seen\n";
        else
            cout<<"unseen\n";
    }
    return 0;
}
