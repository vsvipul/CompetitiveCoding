#include <bits/stdc++.h>
using namespace std;

long long int sop(vector <long long int> v)
{
    long long int i,j;
    long long int ans=0;
    vector <long long int> v1=v;
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
    map <long long int,vector <long long int> > m;
    long long int n,i;
    long long int temp;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>temp;
        m[temp].push_back(i);
    }
    map <long long int, long long int > m1;
    map <long long int, vector <long long int> >::iterator it;
    for (it=m.begin();it!=m.end();it++)
    {
    	m1[it->first]=sop(m[it->first]);
    }
    long long int q;
    long long int x;
    cin>>q;
    while (q--)
    {
        cin>>x;
        cout<<m1[x]<<'\n';
    }
    return 0;
}
