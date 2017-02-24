#include <bits/stdc++.h>
using namespace std;

long long int findwood(vector <int> v,int mid)
{
    int i;
    long long int sum=0;
    for (i=0;i<v.size();i++)
    {
        if (v[i]>=mid)
            sum+=v[i]-mid;
    }
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int n,m,i,temp;
    long long int sum=0;
    cin>>n>>m;
    vector <int> v;
    for (i=0;i<n;i++)
    {
        cin>>temp;
        sum+=temp;
        v.push_back(temp);
    }
    if (sum<m)
    {
        cout<<"-1\n";
        return 0;
    }
    int mid;
    int l=0;
    int r=2000000000;
    while (r-l>1)
    {
        mid=(l+r)/2;
        if (findwood(v,mid)>=m)
            l=mid;
        else
            r=mid-1;
    }
    if (findwood(v,r)>=m)
        cout<<r<<'\n';
    else
        cout<<l<<'\n';
    return 0;
}
