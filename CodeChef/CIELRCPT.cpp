#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,res;
    cin>>t;
    while (t--)
    {
    	cin>>n;
	res=n/2048;
    	cout<<res+(__builtin_popcount(n%2048))<<"\n";
    }
    return 0;
}
