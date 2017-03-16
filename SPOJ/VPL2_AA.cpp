#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t,i;
    double p0,p1,time,p,k,res;
    cin>>t;
    for (i=1;i<=t;i++)
    {
        cin>>p0>>p1>>time>>p;
        k=log(p0/p1);
        k/=time;
        res=log(p0/p);
        res/=k;
        cout<<"Scenario #"<<i<<": "<<fixed<<setprecision(2)<<res<<"\n";
    }
    return 0;
}
