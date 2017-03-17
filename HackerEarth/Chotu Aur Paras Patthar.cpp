#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
using namespace std;
 
bool isprime[100005];
vector <int> v;
void sieve()
{
    int i,j;
    memset(isprime,true,sizeof(isprime));
    for (i=2;i<100005;i++)
    {
        if (isprime[i]==true)
        {
            for (j=2*i;j<100004;j+=i)
            {
                isprime[j]=false;
            }
        }
    }
    for (i=2;i<100005;i++)
    {
        if (isprime[i]==true)
            v.push_back(i);
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n;
    ll i,res,tmp,lp;
    sieve();
    cin>>t;
    while (t--)
    {
        cin>>n;
        res=1;
        for (i=0;i<v.size() && v[i]<=n;i++)
        {
            lp=0;
            tmp=v[i];
            while (tmp<=n)
            {
                lp+=n/tmp;
                tmp*=v[i];
            }
            res=((res%MOD)*((lp+1)%MOD))%MOD;
        }
        cout<<res<<"\n";
    }
    return 0;
}
