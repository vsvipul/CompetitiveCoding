#include <bits/stdc++.h>
using namespace std;

int primacity[10000001];
void sieve()
{
    int i,j;
    memset(primacity,0,sizeof(primacity));
    for (i=2;i<10000001;i++)
    {
        if (primacity[i]==0)
        {
            for (j=i;j<10000001;j+=i)
            {
                primacity[j]++;
            }
        }
    }
}

int main()
{
    int t,a,b,k,i,temp;
    sieve();
    vector <int> v[9];
    for(i=2;i<10000001;i++)
        v[primacity[i]].push_back(i);
    cin>>t;
    while (t--)
    {
        cin>>a>>b>>k;
        if (k>=9)
            cout<<"0"<<endl;
        else
        {
            temp=upper_bound(v[k].begin(),v[k].end(),b)-lower_bound(v[k].begin(),v[k].end(),a);
            cout<<temp<<endl;
        }
    }
    return 0;
}
