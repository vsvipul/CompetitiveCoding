#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    int t,w,b;
    double res;
    cin>>t;
    while (t--)
    {
    	cin>>w>>b;
    	res=b%2;
    	cout<<fixed<<setprecision(6)<<res<<'\n';
    }
    return 0;
}
