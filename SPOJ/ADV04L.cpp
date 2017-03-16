#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    vector <ll> v;
    vector <ll>::iterator it;
    int i,t;
    v.push_back(1);
    v.push_back(1);
    for (i=2;i<90;i++)
    {
    	v.push_back(v[i-1]+v[i-2]);
    }
    ll m,tmp,res;
    cin>>t;
    while (t--)
    {
    	res=0;
    	cin>>m;
    	tmp=m;
    	while (tmp>0)
    	{
    		it=upper_bound(v.begin(),v.end(),tmp);
    		res+=*it;
    		if (it!=v.begin())
    			it--;
    		tmp-=*it;
    	}
    	cout<<res<<'\n';
    }
    return 0;
}
