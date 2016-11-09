#include <bits/stdc++.h>
using namespace std;

int main()
{
    double t,x,y,z;
    double res,temp,sum;
    cin>>t;
    while (t--)
    {
    	cin>>x>>y>>z;
    	temp=x*x+y*y+z*z;
    	sum=x+y+z;
    	sum*=sum;
    	sum/=2;
    	res=sum-temp;
    	cout<<setprecision(2)<<fixed<<res<<endl;
    }
    return 0;
}
