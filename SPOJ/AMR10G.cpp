#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    int t,n,k,i,temp;
    cin>>t;
    while (t--)
    {
    	cin>>n>>k;
    	vector <int> v;
    	for (i=0;i<n;i++)
    	{
    		cin>>temp;
    		v.push_back(temp);
    	}
    	sort(v.begin(),v.end());
    	int min=INT_MAX;
    	if (k==1)
    		min=0;
    	else if (k==n)
    		min=v[n-1]-v[0];
    	else
    	{
    		for (i=0;i<=n-k;i++)
    		{
    			if (abs(v[i]-v[i+k-1])<min)
    				min=abs(v[i]-v[i+k-1]);
    		}
    	}
    	cout<<min<<'\n';
    }
    return 0;
}
