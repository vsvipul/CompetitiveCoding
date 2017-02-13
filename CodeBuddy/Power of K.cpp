#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    ll l,r,k,temp;
    int t,flag;
    cin>>t;
    while (t--)
    {
    	temp=1;
    	flag=0;
    	cin>>l>>r>>k;
    	if ((1>=l)&&(1<=r))
    		{
    			flag=1;
    			cout<<1<<" ";
    		}
    	while (r/temp>=k)
    	{
    		temp*=k;
    		if ((temp>=l)&&(temp<=r))
    		{
    			flag=1;
    			cout<<temp<<" ";
    		}
    	}
    	if (flag==0)
    		cout<<"-1";
    	cout<<'\n';
    }
    return 0;
}
