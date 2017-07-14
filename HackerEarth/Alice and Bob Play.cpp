#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,m;
    cin>>t;
    while (t--)
    {
    	cin>>n>>m;
    	if (m==1 && n==1)
    	    cout<<"Alice\n";
    	else if (m==1)
    	    cout<<"Bob\n";
    	else if ((n*m)%2)
    		cout<<"Alice\n";
    	else
    		cout<<"Bob\n";	
    }
    return 0;
}
