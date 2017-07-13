#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,tmp,res;
    cin>>t;
    while (t--)
    {
    	res=0;
    	cin>>n;
    	while (n--)
    	{
    		cin>>tmp;
    		res^=tmp;
    	}
    	cout<<res<<endl;
    }
    return 0;
}
