#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    long int x,res;
    scanf("%d",&t);
    while (t--)
    {
    	res=0;
    	scanf("%d %d",&n,&k);
    	priority_queue <long int> q;
    	while (n--)
    	{
    		scanf("%ld",&x);
    		q.push(x);
    	}
    	while (k--)
    	{
    		x=q.top();
    		res+=x;
    		q.pop();
    		q.push(x/2);
    	}
    	printf("%ld\n",res);
    }
    return 0;
}
