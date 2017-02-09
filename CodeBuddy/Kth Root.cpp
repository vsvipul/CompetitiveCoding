#include <bits/stdc++.h>
using namespace std;

double power(double x, int k )
{
	int i;
	double res=1;
	for (i=0;i<k;i++)
	{
		res*=x;
	}
	return res;
}

int main()
{
	ios_base::sync_with_stdio(false);
    int t,k;
    double l,r,mid,res;
    long long int n;
    cin>>t;
    while (t--)
    {
    	cin>>n>>k;
    	l=1;
    	r=1000000000000000000;
    	int loop=100;
    	while (loop--)
    	{
    		mid=(l+r)/2;
    		if (power(mid,k)>n)
    			r=mid;
    		else
    			l=mid;
    	}
    	if (power(l,k)==n)
    		res=l;
    	else
    		res=r;
    	cout<<fixed<<setprecision(4)<<res<<'\n';
    }
    return 0;
}
