#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    int t,n,m,k,temp;
    cin>>t;
    while (t--)
    {
    	cin>>n>>m>>k;
    	temp=abs(n-m);
    	if (temp>=k)
    		temp-=k;
    	else
    		temp=0;
    	cout<<temp<<'\n';
    }
    return 0;
}
