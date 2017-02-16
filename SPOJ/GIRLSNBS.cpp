#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    int g,b,mini,maxi,res;
    cin>>g>>b;
    while (g!=-1)
    {
    	mini=min(g,b);
    	maxi=max(g,b);
    	if (maxi%(mini+1)>0)
    		res=maxi/(mini+1) + 1;
    	else
    		res=maxi/(mini+1);
    	cout<<res<<'\n';
    	cin>>g>>b;
    }
    return 0;
}
