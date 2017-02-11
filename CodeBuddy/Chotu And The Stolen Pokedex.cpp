#include <bits/stdc++.h>
using namespace std;

bool isprime[100001];
void sieve()
{
    int i,j;
    memset(isprime,true,sizeof(isprime));
    for (i=2;i<100001;i++)
    {
        if (isprime[i]==true)
        {
            for (j=i*2;j<100001;j+=i)
            {
                isprime[j]=false;
            }
        }
    }
}

bool check(string str, int n)
{
    int i,temp=0;
    for (i=0;i<str.length();i++)
    {
        temp=temp*10+(str[i]-'0');
        if (temp>=n)
            temp%=n;
    }
    return !temp;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int i,t;
    sieve();
    string str;
    cin>>t;
    while (t--)
    {
        cin>>str;
        for (i=100000;i>1;i--)
        {
            if (isprime[i]==true)
            {
                if (check(str,i))
                {
                    cout<<i<<'\n';
                    break;
                }
            }
        }
    }
    return 0;
}
