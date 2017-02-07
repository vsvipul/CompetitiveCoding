#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    int m,n,temp,i;
    cin>>m>>n;
    priority_queue <int> q;
    for (i=0;i<m;i++)
    {
    	cin>>temp;
    	q.push(temp);
    }
    long long int res=0;
    while (n--)
    {
    	temp=q.top();
    	res+=temp;
    	q.pop();
    	q.push(temp-1);
    }
    cout<<res<<'\n';
    return 0;
}
