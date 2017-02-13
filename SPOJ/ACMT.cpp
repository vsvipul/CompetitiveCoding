#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    int t,e,n;
    cin>>t;
    while (t--)
    {
    	cin>>e>>n;
    	if (2*e<n||2*n<e)
    		cout<<min(e,n)<<'\n';
    	else
    	{
    		cout<<(n+e)/3<<'\n';
    	}
    }
    return 0;
}
