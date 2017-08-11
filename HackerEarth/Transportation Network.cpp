#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,q,t,a,b;
    cin>>n>>q;
    map <int,int> road;
    map <int,int> rail;
    int v[100005]={0};
    set <int>::iterator it;
    while (q--)
    {
    	cin>>t>>a>>b;
    	if (t==1)
    	{
    		if (!v[a])
    		{
	    		if (road[a]==1)
	    			v[a]=1;
	    		else
	    			rail[a]=1;
	    		road.erase(a);
	    	}
    		if (!v[b])
    		{
	    		if (road[b]==1)
	    			v[b]=1;
	    		else
	    			rail[b]=1;
	    		road.erase(b);
	    	}
    	}
    	else
    	{
    		if (!v[a])
    		{
	    		if (rail[a]==1)
	    			v[a]=1;
	    		else
	    			road[a]=1;
	    		rail.erase(a);
	    	}
	    	if (!v[b])
    		{
	    		if (rail[b]==1)
	    			v[b]=1;
	    		else
	    			road[b]=1;
	    		rail.erase(b);
	    	}
    	}
    	if (!road.size() && !rail.size())
    		cout<<"YES\n";
    	else
    		cout<<"NO\n";
    }
    return 0;
}
