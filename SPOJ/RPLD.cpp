#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,r,i,j,c,k;
    pair <int,int> p1;
    cin>>t;
    for (j=1;j<=t;j++)
    {
    	set < pair<int,int> > s;
    	cin>>n>>r;
    	for (k=0;k<r;k++)
    	{
    		cin>>i>>c;
    		p1=make_pair(i,c);
    		s.insert(p1);
    	}
    	if (s.size()!=r)
    		cout<<"Scenario #"<<j<<": impossible\n";
    	else
    		cout<<"Scenario #"<<j<<": possible\n";
    }
    return 0;
}
