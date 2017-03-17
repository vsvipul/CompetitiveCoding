#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
double dist(ll a, ll b, ll x, ll y)
{
    double res;
    res=sqrt(((x-a)*(x-a))+((y-b)*(y-b)));
    return res;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    ll t,n,i,x,y,r,c;
    vector < pair<ll,ll> > points;
    vector < ll > rad;
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>x>>y>>r;
        points.push_back(make_pair(x,y));
        rad.push_back(r);
    }
    cin>>t;
    while (t--)
    {
        c=0;
        cin>>x>>y;
        for (i=0;i<n;i++)
        {
            if (dist(points[i].first,points[i].second,x,y)<=rad[i])
                c++;
        }
        cout<<c<<"\n";
    }  
    return 0;
}
