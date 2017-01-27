#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int x,y,z,i,temp;
    long long int res=0;
    vector <int> p,q,r;
    cin>>x;
    for (i=0;i<x;i++)
    {
    	cin>>temp;
    	p.push_back(temp);
    }
    cin>>y;
    for (i=0;i<y;i++)
    {
    	cin>>temp;
    	q.push_back(temp);
    }
    cin>>z;
    for (i=0;i<z;i++)
    {
    	cin>>temp;
    	r.push_back(temp);
    }
    sort(p.begin(),p.end());
    sort(q.begin(),q.end());
    sort(r.begin(),r.end());
    for (i=0;i<y;i++)
    {
    	vector <int>:: iterator it1=upper_bound(p.begin(),p.end(),q[i]);
    	vector <int>:: iterator it2=lower_bound(r.begin(),r.end(),q[i]);
    	res+=(it1-p.begin())*(r.end()-it2);
    }
    cout<<res<<'\n';
    return 0;
}
