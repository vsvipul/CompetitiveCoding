#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    int t,n,m,i;
    long int temp;
    cin>>t;
    while (t--)
    {
    	set <long int> s;
    	set <long int>::iterator it; 
    	cin>>n>>m;
    	for (i=0;i<n;i++)
    	{
    		cin>>temp;
    		s.insert(temp);
    	}
    	for (i=0;i<m;i++)
    	{
    		cin>>temp;
    		it=s.find(temp);
    		if (it!=s.end())
    		{
    			cout<<"YES\n";
    		}
    		else
    		{
    			cout<<"NO\n";
    			s.insert(temp);
    		}
    	}
    }
    return 0;
}
