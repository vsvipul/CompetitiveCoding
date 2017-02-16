#include <bits/stdc++.h>
#define pi acos(-1)
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    double l=1,area;
    while (l)
    {
    	cin>>l;
    	if (l==0) break;
    	area=(l*l)/(2*pi);
    	cout<<fixed<<setprecision(2)<<area<<'\n';
    }
    return 0;
}
