#include <bits/stdc++.h>
#define LL long long int
using namespace std;

LL sop(vector <LL> v)
{
    LL i,j;
    LL ans=0;
    vector <LL> v1=v;
    for (i=1;i<v1.size();i++)
    {
        v1[i]+=v1[i-1];
    }
    for (i=0;i<v.size()-1;i++)
    {
        ans+=v[i]*(v1[v1.size()-1]-v1[i]);
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    map <LL,vector <LL> > m;
    map <LL, vector <LL> >::iterator it;
    map <LL, LL > m1;
    int n,i;
    LL temp;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>temp;
        m[temp].push_back(i);
    }
    
    for (it=m.begin();it!=m.end();it++)
    {
        m1[it->first]=sop(it->second);
    }
    LL q;
    LL x;
    cin>>q;
    while (q--)
    {
        cin>>x;
        cout<<m1[x]<<'\n';
    }
    return 0;
}
