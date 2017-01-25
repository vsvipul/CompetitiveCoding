#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,k,i;
    cin>>t;
    while (t--)
    {
    	priority_queue <long long int> q;
    	long long int x,res=0;
    	cin>>n>>k;
    	for (i=0;i<n;i++)
    	{
    		cin>>x;
    		q.push(x);
    	}
    	while (k--)
    	{
    		x=q.top();
    		res+=x;
    		q.pop();
    		q.push(x/2);
    	}
    	cout<<res<<endl;
    }
    return 0;
}
